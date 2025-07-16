// LeetCode 1: Count Subarray with sum k
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Category: Arrays
// Approach: Optimal

#include<bits/stdc++.h>
using namespace std;
int getCount(vector<int>arr, int n, int k)
{
    if(n==0) return 0;
    map<int, int>hashPreSum;
    int preSum = 0;
    int count = 0;
    hashPreSum[0] = 1;
    for(int i=0; i<n; i++)
    {
        preSum += arr[i];
        if(hashPreSum.find(preSum-k) != hashPreSum.end())
        {
            count += hashPreSum[preSum - k];
        }
        hashPreSum[preSum]++;
    }
    return count;
}
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int>arr(n);
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "The total number of subarrays with sum = " << k << " is: " << getCount(arr, n, k);
}