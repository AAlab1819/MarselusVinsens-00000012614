# 115A - Party 
We need to find the minimum number of group can be formed with each employee. Each group has no immediate managers or contain one immediate managers.
We will calculate the superiority number of employees because each employee can be another employee managers. we will do this by comparing each of the employee
superiority values.


Time Complexity: 
	
	O(n^2)

[115A Submission](http://codeforces.com/contest/115/submission/43737353)

#	4C - Registration System 
We will make a registration system which will registered each name that is inputed. System will give out "OK" if the registration is complete or registered,
but system will give out the name back with the registered value for each same name found in the system. Every registered name will be given out value of 1,
where the same name value will be added by 1 for each same name and prompted back to user.


Time Complexity:

	O(nlogn)
	
[4C Submission](http://codeforces.com/contest/4/submission/43737814)
    
# 913B - Christmas Spruce 
We need to check if the tree is a spruce or not. Spruce tree can be identified by every parents have 3 child in the tree.
The first input is how many parents and child are present, the next one is the value of parents / child. The second input
will always give out the number of first input - 1 because there is an unspoken parents (first parents).

In this program, it will calculate how many children each parents have. For each loop if the parents have 3 child / leaf count,
it will be spruce, else the program will give output not spruce.

Time Complexity:

	O(n)
	
[913B Submission](http://codeforces.com/contest/913/submission/43739974)
