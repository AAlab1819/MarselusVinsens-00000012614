#include <iostream>
using namespace std;

struct dragon {
	int str_req;
	int str_rwd;
};

void oddeven(dragon arr[], int length)
{
	bool sorted = false;
	while(!sorted)
	{
		sorted = true;
		int temp;
		for(int i = 1; i < length-1; i+=2)
		{
			if(arr[i].str_req > arr[i+1].str_req)
			{
				//swap(arr[i],arr[i+1]);
				temp = arr[i].str_req;
				arr[i].str_req = arr[i+1].str_req;
				arr[i+1].str_req = temp;
				
				temp = arr[i].str_rwd;
				arr[i].str_rwd = arr[i+1].str_rwd;
				arr[i+1].str_rwd = temp;
				
				sorted = false;
			}
		}
		for(int i = 0; i < length-1; i+=2)
		{
			if(arr[i].str_req > arr[i+1].str_req)
			{
				//swap(arr[i],arr[i+1]);
				temp = arr[i].str_req;
				arr[i].str_req = arr[i+1].str_req;
				arr[i+1].str_req = temp;
				
				temp = arr[i].str_rwd;
				arr[i].str_rwd = arr[i+1].str_rwd;
				arr[i+1].str_rwd = temp;
				
				sorted = false;
			}
		}
	}
}

int main()
{
	int str, drg;
	bool pass = true;
	cin >> str >> drg;
	dragon dragons[drg];	
	
	for (int i=0; i<drg; i++)
	{
		cin >> dragons[i].str_req >> dragons[i].str_rwd;
	}
	oddeven(dragons, drg);
	
	for(int i=0; i<drg; i++) {
    if(str > dragons[i].str_req) {
       str += dragons[i].str_rwd;
    } else {
  		pass = false;
        break;
    }
    }
    
    if(pass!=true){
    	cout << "NO";
	}else cout << "YES";
	
    return 0;
}
