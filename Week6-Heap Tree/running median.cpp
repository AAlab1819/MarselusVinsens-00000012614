#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    
    if (largest != i) 
    {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, n, i);
    }
    
    for (int i=n-1; i>=0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int n;
    double median;
    cin >> n;
    int list[n];
    
    for(int i = 0; i < n; i++) 
    {
        cin >> list[i];
        heapSort(list, i+1);

        if ((i+1)%2==0)
        {
            median = list[i/2]+list[(i/2)+1];
            median = median/2;
        }
        else
        {
            median=list[(i+1)/2];
        }
        cout << fixed << setprecision(1) << median << endl;
    }
    return 0;
}
