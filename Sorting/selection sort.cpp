#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    void selectionSort(int arr[], int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int min_index=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[min_index])
                {
                    min_index=j;
                }
            }
            swap(arr[min_index],arr[i]);
        }
    }
};