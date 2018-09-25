# 268B - Buttons

Here we need to count how many times did manao will press the button to unlock the door. Manao will do the best and efficient way he can do.
We need to calculate the worst possibilities manao can give.



For example inputs will be 4.

Code will run 4 times because of 4 buttons

in the first loop will be button -1 times 1 (because of loop) = 3

Second loop will be button -2 times 2 (because of 2nd loop) = 4

Third loop will be button -3 times 3 (because of 3rd loop) = 3

Last loop will be 0

The answer from the loop will be 3 + 4 + 3 = 10. Then we add the initial 4 buttons.

Final answer is 14 times. 

Time Complexity:
            O(n)

[268B Submission](https://codeforces.com/contest/268/submission/43294433)

# 598D- Igor In the Museum

We need to help igor to count howmany pictures he can see from x and y points from n * m dimension.
The first input will be  point n and m to form the museum maps, next input will be an array of '*' or '.'.
Where '*' will be walls and '.' will be an empty space where he can walk. The next input will be the point where 
igor will seeing pictures. Output will be howmany picture can he see in the input points.

There will be one picture every one empty space and one walls. One empty space can be used many times.

To solve this we will use flood fill or seed fills to search where he can walk and add how many pictures he can see in that spots.
To take out the answer we just need to input points where we want to know howmany pictures can be seen. This will direcly access the answer that already saved in the visited space where the answer is addition of every picture seen by igor ( every 1 walls and 1 empty space).

Time Complexity:
            O(nm)

[598D Submission](https://codeforces.com/contest/598/submission/43407562)
