#include <bits/stdc++.h>
using namespace std;

char museum[1000][1000]; // the field of maps
int answer[1000000] = {0}; // list of answers
int visit[1000][1000] = {0}; //visited vells
int ans = 0;
int cntr = 0;

int rowx, coly;
int testCase, locx, locy;


void check(int row, int col)
{
    if(row < 0 || row >= rowx || col < 0 || col >= coly) return; // corners 
    if(visit[row][col] != 0) return; //visited cells or cells done
    if(museum[row][col] == '*') //add 1 picture to the answers
    {
        ans++;
        return;
    }
    //replace the visited ans with counters
    visit[row][col] = cntr;
    //do the same to every side
    check(row-1, col);
    check(row+1, col);
    check(row, col-1);
    check(row, col+1);
    return;
}

int main()
{
	//input for x and y of museum maps & how many point to be tested
    cin >> rowx >> coly >> testCase;
    
    //input maps
    for(int i = 0; i < rowx; i++)
    {
        for(int j = 0; j < coly; j++)
        {
            cin >> museum[i][j];
        }
    }
    //counting the answer for each point available
    for(int i = 0; i < rowx; i++)
    {
        for(int j = 0; j < coly; j++)
        {
            if(museum[i][j] == '.' && visit[i][j] == 0)
            {
                cntr++; // add counters
                ans = 0; //make sure answer is 0
                check(i,j); //re-calling checking function
                answer[cntr] = ans; //insert answers
            }
        }
    }
    
    //test point loop
    for(int x = 0; x < testCase; x++)
    {
    	//input point to check
        cin >> locx >> locy;
        //take answer from cells 
        cout << answer[visit[locx-1][locy-1]] << endl;
    }
    return 0;
}
