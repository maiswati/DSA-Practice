// LeetCode 11: Max consecutive once
// Link: https://leetcode.com/problems/max-consecutive-ones/
// Category: Arrays
// Approach: Iterating over array



#include<bits/stdc++.h>
using namespace std;
int getMaximum(int arr[], int n)
{
    int count = 0;
    int mxx = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] == 1)
        {
            count++;
            mxx = max(count, mxx);
        }else
        {
            count = 0;
        }
    }
    return mxx;
}
int main()
{
    int arr[] = {1,1,0,1,1,1};
    int n = 6;
    cout << "Maximum consecutive ones is: " << getMaximum(arr, n);
}