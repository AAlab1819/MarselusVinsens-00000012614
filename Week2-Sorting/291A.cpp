#include <iostream>
using namespace std;

int main()
{
    int numsec;
    int numcall = 0;
    
    cin>>numsec;

    int id[numsec];
    for(int i=0;i<numsec;i++)
    {
        cin>>id[i];
    }
    
    //sorting with shell sort
    int temp;
    for(int i = numsec/2; i > 0; i = i/2)
	{
		for(int j = i/2; j < numsec; j++)
		{
			for(int k = j-i; k >= 0; k = k-i)
			{
				
				if(id[k+i] >= id[k]) break;
				else
				{
					temp = id[k];
					id[k] = id[k+i];
					id[k+i] = temp;
					//swap(id[k],id[k+i]);
				}
			}
		}
	}
	
    for(int i=0; i<numsec;i++)
    {
        //count calls made
        if(id[i]==id[i+1] && id[i]!=0)
        {
            numcall++;
        }
        //to check if data is invalid
        if(id[i]==id[i+2] && id[i]!=0)
        {
            numcall=-1;
            break;
        }
    }
    
    cout<<numcall<<endl;
    
    return 0;
}
