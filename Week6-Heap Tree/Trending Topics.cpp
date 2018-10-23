#include <bits/stdc++.h>
using namespace std;

struct Topic
{
    int id;
    long long int old_zscore;
    long long int new_zscore;
    long long int change;
};

vector<Topic> heapify(vector<Topic> allTopics) 
{
    for(int i = allTopics.size()/2; i >= 0; i--) 
    {
        int largest = i;  
        int left = 2*i + 1;  
        int right = 2*i + 2; 
        if(left < allTopics.size()) 
        { 
            if(allTopics[largest].id < allTopics[left].id) 
            {
                swap(allTopics[largest], allTopics[left]);
            }
        }
        if(right < allTopics.size()) 
        {
            if(allTopics[largest].id < allTopics[right].id) 
            {
                swap(allTopics[largest], allTopics[right]);
            }
        }
    }
    return allTopics; 
}
 
vector<Topic> heapSort(vector<Topic> allTopics) {
    vector<Topic> sorted;
    for(int i = 0; i < allTopics.size(); i++) {
        sorted.push_back(allTopics[0]);
        allTopics[0].id = -1;
        allTopics = heapify(allTopics);
    }
    return sorted;
}

int main()
{
    map<long long int, vector<Topic>, greater<long long int> > heap;
    int n;
    cin >> n;
    int id, z, p, l, c, s;
    Topic new_topic;

    for(int i = 0; i < n; i++) 
    {
        cin >> id >> z >> p >> l >> c >> s;
        new_topic.id = id;
        new_topic.old_zscore = z;
        new_topic.new_zscore = (p*50LL) + (l*5LL) + (c*10LL) + (s*20LL);
        new_topic.change = new_topic.new_zscore - new_topic.old_zscore;
        heap[new_topic.change].push_back(new_topic);
    }

    for(map<long long int, vector<Topic>, greater<long long int> >::iterator it=heap.begin(); it!=heap.end(); it++) 
    {
        it->second = heapify(it->second);
        it->second = heapSort(it->second);
    }

    int counter = 1;
    for(map<long long int, vector<Topic>, greater<long long int> >::iterator it=heap.begin(); it!=heap.end(); it++) 
    {
        for(int i = 0; i < (it->second).size(); i++) 
        {
            cout << (it->second)[i].id << " " << (it->second)[i].new_zscore << endl;
            if(++counter > 5) 
            {
                break;
            } 
        }
        if(counter > 5) 
        {
            break;
        }
    }
    return 0;
}
