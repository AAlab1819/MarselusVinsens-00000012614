# 912A - Tricky Alchemy
Objective : Find the minimum of crystal needed to make the balls

Information : 

>**Yellow Ball** needs **2 Yellow Crystal**

>**Blue Ball** needs **3 Blue Crystal**

>**Green Ball** needs **1 Yellow Crystal & 1 Blue Crystal**

Solution :

To solve this problem we just need to calculate the over all crystal required.
To do this we will separate the crystal into 2 section **Blue** and **Yellow**.
This crystal is separated into 2 because the green ball only need one of each so this is just to make it easier.

To make the counter we will use **if** function.

>if ( yellow crystal < 2 * yellow ball + green ball) crystal_needed += 2*yellow ball + green ball - yellow crystal;

>if ( blue crystal < 3 * blue ball + green ball ) crystal_needed += 3*blue ball + green ball - blue crystal;

These function just reverting the ball into crystal cost again so we can calculate roughly how many crystal we need to find.

Output : 

The Output is crystal_needed, it contains the sums of all cost of the balls - (substracted) by crystal owned.

[912A Submission](https://codeforces.com/contest/912/submission/42449382)

# 854A - Fraction
Objective : Find the original numbers before it was added each other.

Information : 

> Input : N = A + B 

> N > 3, A > B

> A is Numerator B is Denominator

Solution :

To solve this problem we need to find the GCD of the input number that is paired with 1. 
After that we need to deduct input N with the GCD (that is paired with 1) to 
find the second initial number befor addition.

GCD Function used : 

int gcd (int a, int b)
{
	if (a < b) return gcd(b,a);
	int remind = a%b;
	if (0 == remind) return b;
	return gcd(b, remind);	
}

Output : 

The Output of this problem will be 2 numbers. One is the GCD that is paired with 1 
and the leftover of input N substracted by the GCD.

[854A Submission](https://codeforces.com/contest/854/submission/42449144)
    
# 988A - Diverse Team
Objective : To form a team of x member from n student with each student having different rating.

Information : 

> Input (1 ≤ x ≤ n)

> Rating ( 1 ≤ Rating ≤ 100)

Solution :

To Solve this problem we need to compare the rating with each other and to make it easier
we will mark the rating if it is a duplicates. The function used to mark the datas are

	for(int i = 0; i <numstd-1; i++)
	{
		for(int j=i+1; j<numstd; j++)
		{
			if(rating[i]==rating[j]) rating[j]=-1;
		}
	}
  
This works by comparing one rating with the other then if duplicates are found it will be replaced
with -1 in which later will be used as a filter. The filtering are placed together with output function.

Filtering Function :

	if(cnt >=teamstd)
	{
		cout << "YES" <<endl;
		for(int i=0; i<numstd; i++)
		{
			//outputing order of student
			if(rating[i]!=-1 && teamstd>0)
			{
				teamstd--;
				cout<<i+1<<" ";
			}
		}
	}

The filtering works by checking the rating if the value is not -1 and then it will give out 
the numerical order of the student as a follow up answer. 

Output : 

The output will be "YES" followed with the numerical order of the student in the team or "NO" with no further follow up.

[988A Submission](https://codeforces.com/contest/988/submission/42450011)
