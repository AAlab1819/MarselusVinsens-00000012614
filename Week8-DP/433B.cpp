#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num,ans,type,l,r;
    cin>>num;
    long long cost[num],stored[num];

	for(int i=1;i<=num;i++)
	{
	    cin>>cost[i];
	    stored[i]=cost[i];
	    cost[i]+=cost[i-1];
	}
	
	sort(stored+1,stored+num+1);
	

	for(int i=1;i<=num;i++)
	{
	    stored[i]+=stored[i-1];
	}
	
	cin>>ans;
	for(int i=1;i<=ans;i++)
	{
		cin>>type>>l>>r;
		if(type==1) cout<<cost[r]-cost[l-1]<<endl;
		else cout<<stored[r]-stored[l-1]<<endl;
	}

	return 0;
}
