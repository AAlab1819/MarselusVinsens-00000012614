#include <iostream>
using namespace std;

int main()
{
	// Var.
	long long yellowc, bluec, yellowb, greenb, blueb;
	long long sumc, sumcball, needc = 0;
	
	cin >> yellowc >> bluec;
	cin >> yellowb >> greenb >> blueb;
	
	//function
	//yellow + grren counter
	if(yellowc < 2*yellowb + greenb)
	needc+= 2*yellowb + greenb - yellowc;
	//blue + green counter
	if(bluec < 3*blueb + greenb)
	needc+= 3*blueb + greenb - bluec;
	//output
	cout << needc;
	return 0;	
}
