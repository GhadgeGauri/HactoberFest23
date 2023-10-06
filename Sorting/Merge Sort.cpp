#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int ln=m-l+1;
        int rn=r-m;
        int left[ln];
        int right[rn];
        int x=0;
        for(int i=l;i<=m;i++)
            left[x++]=arr[i];
        x=0;
        for(int i=m+1;i<=r;i++)
            right[x++]=arr[i];
        int i=0;
        int j=0;
        x=l;
        while(i<ln && j<rn)
        {
            if(left[i]==right[j])
            {
                arr[x++]=left[i++];
                arr[x++]=right[j++];
            }
            else if(left[i]<right[j])
                arr[x++]=left[i++];
            else
                arr[x++]=right[j++];
        }
        if(i==ln)
            while(j<rn)
                arr[x++]=right[j++];
        if(j==rn)
            while(i<ln)
                arr[x++]=left[i++];
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l>=r)
            return;
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
};
