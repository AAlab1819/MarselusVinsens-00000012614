#include<bits/stdc++.h>
using namespace std;

const int mx_w = 31;
int x_w[mx_w];

int main()
{
	int tc;
	cin >> tc;
	
	while(tc--)
	{
		for(int i=0;i<mx_w;i++)
		{
			x_w[i]=0;
		}
		int items;
		cin >> items;
		
		for(int i=0; i < items;i++)
		{
			int iw, iv;
			cin >> iv >> iw;
			for(int w=mx_w-1;w>=iw;w--)
			{
				x_w[w]= max(x_w[w],x_w[w-iw]+iv);
			}
		}
		int tot=0;
		int p,we;
		cin >> p;
		for ( int i=0; i<p; i++)
		{
			cin>> we;
			tot +=x_w[we];
		}
		cout << tot << endl;
	}	
	return 0;
}
