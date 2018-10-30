#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	long long liter, tmp, amo =0, minP=1e18;
	
	cin >> num >> liter;
	long long price[num];
	
	for(int i=0;i< num;i++)
	{
		cin >> price[i];
	}
	
	for (int i=1; i<= num; i++)
	{
		price[i]= min(price[i],price[i-1]*2);
	}
	
	for (int i=num-1; i>=0; i--)
	{
		tmp = liter/(1<<i);
		amo += tmp*price[i];
		liter-=tmp<<i;
		minP=min(minP, amo+(liter>0)*price[i]);	
	}
	cout << minP << endl;
	return 0;
}
