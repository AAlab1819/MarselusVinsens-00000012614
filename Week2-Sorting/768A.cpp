#include <iostream>
using namespace std;

void cocktailshaker(int arr[], int length)
{
	bool swapped = false;
	do
	{
		swapped = false;
		for(int i = 0; i < length-1; i++)
		{
			if(arr[i] > arr[i+1])
			{
				swap(arr[i],arr[i+1]);
				swapped = true;
			}
		}
		if(!swapped) break;
		
		swapped = false;
		for(int j = length -2; j>=0; j--)
		{
			if(arr[j] > arr[j+1])
			{
				swap(arr[j],arr[j+1]);
				swapped = true;
			}
		}
	}
	while(!swapped);
}

int main()
{
	int numstew;
	int help = 0;
	
	cin >> numstew;
	int steward[numstew];
	
	for(int i = 0; i < numstew; i++)
    {
    	cin >> steward[i];
	}
	
	cocktailshaker(steward, numstew);
		
	int weak = steward[0];
	int strong = steward[numstew-1];

	for (int i=0; i<numstew; i++)
	{
		if(steward[i]!=weak&&steward[i]!=strong)
		{
			help++;
		}
	}
	
    cout << help;
	return 0;
}
