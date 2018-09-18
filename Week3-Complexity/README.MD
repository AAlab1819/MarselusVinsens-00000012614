# 492B - Vanya Lanterns

We need to help Vanya to find the minimum radius of light that the lantern have to give to light out the street.

First we sort the input of lantern position, then we compare first and the last position lantern to find the rough radius.

After done doing that, we continue to compare each of the lantern position n with n+1 to find the maximum radius.

To get the actual output we need to divide the radius from comparing n with n+1 lantern by 2 because it is the diameter ( 2 radius of 2 lantern).

To finish off we setprecision(10) to limit the answer to not exceed 10^-9.


Time Complexity:

	Worst Case: O(nlogn)
	Average Case: θ(nlogn)
	Best Case: Ω(nlogn)

[492B Submission](https://codeforces.com/contest/492/submission/43018104)

# 148A - Insomnia Cure

We need to find out howmany dragons are hurt because of the princess dream. The princess will hurt dragons 4 times in k, l, m, n order.

If any of the order is 1. Every dragon got thier turn to get his / her ass kicked by the princess. If there is no 1 in any of the order that the princess give out,
we will do a loop check if any of the loop will get the x dragon from y count dragon (how many dragons are counted by princess) by checking if the x number can be divided by any of the princess order (k, l , m ,n).

After doing loop check we can get the casualty.


Time Complexity:

	Worst Case: O(n)
	Average Case: θ(n)
	Best Case: Ω(1) - it is posible if one of any inputs is 1.

[148A Submission](https://codeforces.com/contest/148/submission/43018501)
    
# 469A - I Wanna Be the Guy

We need to help x and y to check if the game can be passed by them working together.

Time Complexity:

	Worst Case: O(n)
	Average Case: θ(n)
	Best Case: Ω(n)

[469A Submission](https://codeforces.com/contest/469/submission/43018742)

