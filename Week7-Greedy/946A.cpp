#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a,b = 0, c =0;
	
	for(int i = 0; i< n; i++)
	{
		cin >> a;
		if(a>=0) b+=a;
		else c+=a;
	}
	cout << b - c;
	
	return 0;
}
