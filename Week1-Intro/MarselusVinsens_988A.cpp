#include <iostream>
using namespace std;

int main()
{
	int numstd, teamstd;
	cin >> numstd >> teamstd;
	
	int rating[numstd-1];
	int cnt = 0;
	int teamcount = teamstd;
	
	//array input
	for(int i=0; i<numstd; i++)
	{
		cin>>rating[i];
	}
	
	// array marking for duplicates
	for(int i = 0; i <numstd-1; i++)
	{
		for(int j=i+1; j<numstd; j++)
		{
			if(rating[i]==rating[j]) rating[j]=-1;
		}
	}
	
	//count marks for output
	for(int i=0; i<numstd; i++)
	{
		if(rating[i]!=-1) cnt++;
	}
	
	//output
	if(cnt >=teamstd)
	{
		cout << "YES" <<endl;
		for(int i=0; i<numstd; i++)
		{
			//outputing order of student
			if(rating[i]!=-1 && teamstd>0)
			{
				teamstd--;
				cout<<i+1<<" ";
			}
		}
	}
	
	else 
	{
		cout << "NO" <<endl;
	}
	
	return 0;	
}
