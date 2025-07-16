// LeetCode 1: Number of Subarrays with sum k
// Link: https://leetcode.com/problems/subarray-sum-equals-k/
// Category: Arrays
// Approach: Brute

#include<bits/stdc++.h>
using namespace std;
int getCount(int arr[], int n, int k)
{
    int count = 0;
    int sum;
    for(int i=0; i<n; i++)
    {
        sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            if(sum == k)
            {
                count++;
            }
        }
    }
}
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "The number of subarrays with sum = " << k << " is: " << getCount(arr, n, k);
}