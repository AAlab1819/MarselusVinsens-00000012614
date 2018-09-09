# 291A - Spyke Talks
Objective : 

To help Polycarpus analyze the data of secretary talking in pair and to determine wether his data is valid or not.

Information : 

Triplets of id is prohibited, the output of the data will be -1 if there are triplets id.

Inputs will be numbers of secretaries (1 ≤ n ≤ 10^3) and n space of ID (0 ≤ idi ≤ 10^9).

Solution :

Sorting used in coding is *Shell Sorting*. Where *Shell Sorting* works by comparing number x with
number x + gap, sorting complete when gap become or equal to 0.

After sorting finish what we do is basically do a for function and check if number x with x + 1 are having 
same numbers followed with number x with x + 2 to have the same number too where the function with x + 2 
will be giving out output -1.

Output : 

The out put is -1 if error data occurs (when where is a conferences because conferences aren't allowed)
or the numbers of a pair of id where it stand as a conversation of a pair of secretaries.

[291A Submission](https://codeforces.com/contest/291/submission/42698256)

# 230A - Dragons
Objective : 

To determine wether Kirito is able to move on to the next level of dungeon or not (By fighting the dragon present int the current one)


Information : 

Input will be as the following :
s and n respectively will be Kirito Strength and Number of Dragons (1 ≤ s ≤ 10^4, 1 ≤ n ≤ 10^3).

followed with X and Y where x will be the Dragon Strength and Y will be Bonus Strength (after defeated).

Solution :

Sorting algorithm used in the coding is *Even Odd Sorting*. Where this sorting sort the number based of the number value
(either it is even or odd in the number of order) then it swaps the value of the number to match whether it is in the correct order 
(base on the value).

After sorting we will do a recursive for function based on the number of dragon. Inside this function
we will calculate the dragon strength and add strength to the character if he kills it or if dragon strentth is too great
this will give output NO.


Output : 

The Output will be "Yes" and "No". it is either he can pass the level or not at all.

[230A Submission](https://codeforces.com/contest/230/submission/42702670)
    
# 768A - Oath of The Night's Watch 
Objective : 

To count howmany stewards will Jon Snow Supports

Information : 

Jon Snow will only support stewards only and if only there is 1 steward have less strength than him and 
another one with strength greater than him. In a thinking he will only help who with strength mediocore ( must have one lowest and one highest).


Solution :

In this coding we will use *Cocktail Sort*. Where *Cocktail Sort* is a variation of *bubble sort*, where this one differs in the movement in the sorting arrays. *Cocktail Sort* move bi-directional alternatively where as *Bubble Sort* always move from left to right and move the largest element to its correct possition in its first iteration, and second biggest and so on.

After Sorting is done we use *for* function to check if there is a stewards whos strength in between the strongest or the weakest in the group. Where as Strongest is the last one in the sorting arrays and the weakes is in the first in line in the arrays.


Output : 

The Output will be the number of stewards whos strength is in between the weakest and strongest which Jon SNow will help.


[768A Submission](https://codeforces.com/contest/768/submission/42704759)
