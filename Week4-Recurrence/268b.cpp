#include <iostream>
using namespace std;

int main()
{
	int button;
	int trys;
	
	cin >> button;
	
	trys = button;
	
	for(int i = 0; i <= button; i++)
	{
		trys += ((button - i)*i);
	}
	cout << trys << endl;	
	return 0;
}
