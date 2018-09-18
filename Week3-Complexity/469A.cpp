#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int lvl, lvlx, lvly, passed, cnt = 0;
	
	cin >> lvl;
	
	int lvlarr[lvl];
	
	//set lvl passed by X
	cin >> lvlx;
	for(int i = 0; i < lvlx; i++)
	{
		cin >> passed;
		lvlarr[passed-1]=1;
	}
	//set lvl passed by Y
	cin >> lvly;
	for(int i = 0; i < lvly; i++)
	{
		cin >> passed;
		lvlarr[passed-1]=1;
	}
	//count lvl that are passed
	for (int i=0;i<lvl;i++)
	{
		if(lvlarr[i]==1) cnt++;
	}
	//output
	if(cnt==lvl) cout << "I become the guy." << endl;
	else cout << "Oh, my keyboard!" << endl;
	
	return 0;
}
