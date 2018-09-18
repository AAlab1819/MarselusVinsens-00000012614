#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int pan, shut, trampled, threatened, dmg = 0;
	long drgcnt;
	
	cin >> pan >> shut >> trampled >> threatened >> drgcnt;
	//default if any of source of dmg is 1, every dragon got turn
	if(pan == 1||shut == 1||trampled == 1||threatened == 1) dmg = drgcnt;
	else
	{
		//loop fron first to last
		//find each n-th dragon that is damaged
        for(int i=1;i<=drgcnt;i++)
        {
            if(i%pan==0||i%shut==0||i%trampled==0||i%threatened==0) dmg++;
        }
	}
	
	cout << dmg << endl;
	
	return 0;
}
