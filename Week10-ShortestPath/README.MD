# 20C - Dijkstra

In this problem we need to fint the path, and in need of use of tupler.Where we need to store the running cost, source, and destination.
We also need to store the track of path, and while running Dijkstra algorithm we need to keep the track of it. After calculation using the algorithm
we will find the process by returning the datas and use stack and pop them all to find the minimum path.

Worst Case: O(E x log(V))

[Submission Link](http://codeforces.com/contest/20/submission/45702276) | [Problem Link](http://codeforces.com/contest/20/problem/C)

# 601A - The Two Routes

For this problem we need to find the shortest time to travel from city 1 to city n for the latest vehicle where as city n is the end / last city.<br>
So for example :
```
4 2
1 3
3 4
```
We can see the first 2 inputs are the number of city (n) and the number of railway or (m). And 1 to 3 and 3 to 4 represent the railways.
While 1 to 4 and 1 to 2 and others are considered as road. If there is a railways / path from city 1 to another, we need to find the time that the bus took
to arrive to town 4. Train can go from 1 > 3 > 4 meanwhile the shortest route for bus will be 1 > 2 > 4, and so the output will be 2.

Worst Case: O(n²)

[Submission Link](http://codeforces.com/contest/601/submission/45702285) | [Problem Link](http://codeforces.com/contest/601/problem/A)
