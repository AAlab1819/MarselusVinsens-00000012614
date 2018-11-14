#include <bits/stdc++.h>

int getDistance(std::vector<std::vector<bool> > g, bool flag){

    int n = g.size();
    int strt(0);
    int target(n - 1);

    int dist(0);
    std::deque<int> x;
    std::vector<int> distance(n, 0);
    x.push_front(strt);
    while(!x.empty()){
        int currentNode = x.back(); x.pop_back();
        for(int p = 0; p < n; p++){
            if(p == strt || distance[p] > 0 || g[currentNode][p] != flag){continue;}
            distance[p] = distance[currentNode] + 1;
            if(p == target){return distance[target];}
            x.push_front(p);
        }
    }

    return -1;
}

int main(){

    int n;
    int m;
    scanf("%d %d\n", &n, &m);
    std::vector<std::vector<bool> > graph(n, std::vector<bool>(n, 0));
    for(int p = 0; p < m; p++){
        int a, b; scanf("%d %d\n", &a, &b);
        --a; --b;
        graph[a][b] = graph[b][a] = 1;
    }

    printf("%d\n", getDistance(graph, !graph[0][n - 1]));

    return 0;
}
