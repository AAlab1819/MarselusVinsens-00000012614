#include <bits/stdc++.h>
using namespace std;

int main()
{
	int req;
	string name;
	map<string, int>data;
	
	cin >> req;
	
	for(int i=0;i<req;i++)
	{
		cin >> name;
		if(data[name]==0)
		{
			data[name]=1;
			cout << "OK" << endl;
		}
		else
		{
			cout << name << data[name] << endl;
			data[name]+=1;
		}
	}
	return 0;
}
