#include <iostream>
using namespace std;

int gcd (int a, int b)
{
	//counting the gcd
	if (a < b) return gcd(b,a);
	int remind = a%b;
	if (0 == remind) return b;
	return gcd(b, remind);
		
}

int main()
{
	int num;
	int numer, denom;
	
	cin >> num;
	
	//function
	for(int i = num/2; i>0 ; i--)
	{
		//take the gcd as a numerator
		if (gcd(i,num-i)==1)
		{
			numer = i;
			//denom is the rest of the number left
			denom = num - numer;
			break;
		}
	}	
	//output
	cout << numer << " " << denom << endl;
	return 0;	
}
