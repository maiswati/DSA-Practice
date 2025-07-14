// LeetCode 7: Optimal Force approach of maximum Subarray sum
// Link: https://leetcode.com/problems/maximum-subarray-sum/
// Category: Arrays
// Approach: Optimal Force Approach


#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[], int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        maxi = max(sum , maxi);
        if(sum < 0)
        {
            sum = 0;
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {2, 3, 5, -2, 7, -4};
    int n = 6;
    cout << "The maximum sum subarray: " << getSum(arr, n);
}

