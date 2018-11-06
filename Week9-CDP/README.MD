#SuperSale

The main target of this program is to get the maximum value that one person can carry. Each item has its own value and weight.
The first input will be Number of Test Cases. Test cases is the number of item that the store has followed with their value and weight.
Followed with how many people in tha group with its strength. The output will be the maximum value that the group can carry.

The solution wil use Dynamic Programing. Firstly finding the maximum value / treshold of the weight can be carried. Checking done by looping from the heaviest possible to the lightest possible.
In the loop we will change the value accordingly to the heaviest possible because we need to get the maximum value.
After all of the loop done, we will sum up all of the maximum value of each person in the group.

Time Complexity: 
	
	 O(n<sup>2</sup>)
