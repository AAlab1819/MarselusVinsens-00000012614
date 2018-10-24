#include <iostream>
using namespace std;

int main()
{
	int n, indx;
	cin >> n;
	string names;
	cin >> names;
	
 	while((names.length()>=3) && (names.find("xxx")!=-1))
	{
		indx = names.find("xxx");
		names.erase(indx, 1);
	}
	cout << n-names.length();
	return 0;
}
