#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	bool trace = true;
	
	for ( int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	for (int i = 0; i<n; i++)
	{
		if(arr[i]%2==1)
		{
			if(arr[i+1]==0||i==n-1)
			{
				trace = false;
				break;
			}
			arr[i+1]--;
		}	
	}
	if(trace == true)cout << "YES";
	else cout << "NO";
	
	return 0;
}
