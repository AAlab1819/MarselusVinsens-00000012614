#include <bits/stdc++.h>
using namespace std;

int main()
{
	long employ;
	int group = 0;
	int k, count;

	cin >> employ;
	int managers[employ];
	//Authority Inputs
	for (int i = 1; i <= employ; i++)
	{
		cin >> managers[i];
	}
	//group counting
	for(int i = 1; i <= employ; i++)
	{
		count = 1;
		k = managers[i];
		while(k!=-1)
		{
			count++;
			k = managers[k];
		}
		group = max(group,count);
	}
	
	cout << group;
	return 0;
}
