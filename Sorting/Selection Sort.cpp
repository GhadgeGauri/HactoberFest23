#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void swap(int* x,int* y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    
    int select(int arr[], int i, int n)
    {
        int smallNumIndex=i;
        for(int j=i+1;j<n;j++)
            if(arr[j]<arr[smallNumIndex])
                smallNumIndex=j;
        return smallNumIndex;
    }
    
    void selectionSort(int arr[], int n)
    {
        for(int i=0;i<n-1;i++)
        {
            int smallIndex=select(arr,i,n);
            if(i!=smallIndex)
                swap(&arr[i],&arr[smallIndex]);
        }
    }
};
