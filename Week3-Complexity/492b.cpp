#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int numLantern;
    long long Slength;
    int rad,sp,ep;
    
    cin>>numLantern>>Slength;
    
    int points[numLantern];
    
    for (int i=0; i<numLantern; i++) {
        cin>>points[i];
    }
    
    //Sort Lantern
    sort(points, points+numLantern);
    
    //Set start and end point
	sp = points[0];
	ep = Slength-points[numLantern-1];
	
	//set current rad of light
	//times 2 because of length 2 lanterns
	rad = max(sp,ep)*2;
	
	//find gab needed to lighten the street
	for(int i=1; i<numLantern;i++)
	{
		rad = max(rad,points[i]-points[i-1]);
	}
	
	//limiting output to not exceed 10^-9
	//rad divided 2 to get 1 lantern radius
	cout << setprecision(10) << fixed << rad/2.0 << endl;
	
    return 0;
}
