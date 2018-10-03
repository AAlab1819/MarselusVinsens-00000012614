#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, vector<int> > tree;
	int num, val, lc,spruc=1;
	
	cin >> num;
	for(int i = 2; i<=num; i++)
	{
		cin >> val; // input value
		tree[val].push_back(i);
	}
	//checking
	for(int i = 0; i<=num; i++)
	{
		 if(tree[i].size()==0) continue;//check if empty or is a child it is a leaf
		else
		{
			lc = 0;
			
			for(int j=0; j<tree[i].size(); j++)
			{
				if(tree[tree[i][j]].size()==0) lc++; //count child in the tree
			}
			if(lc<3) //spruce check (if lc is 3 it is spruce)
			{
				spruc = 0;
			}
		}
	}
	
	if(spruc == 1) cout <<"Yes";
	else cout << "No";
	
	return 0;	
}
