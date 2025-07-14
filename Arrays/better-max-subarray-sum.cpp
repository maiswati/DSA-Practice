// LeetCode 7: Better Force approach of maximum Subarray sum
// Link: https://leetcode.com/problems/maximum-subarray-sum/
// Category: Arrays
// Approach: Better Force Approach


#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[], int n)
{
    int sum;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        sum = 0;
        for(int j=i; j<n; j++)
        {
            sum += arr[j];
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
int main()
{
    int n = 6;
    int arr[] = {2, 3, 5, -2, 7, -4};
    cout << "The subarray with max sum : " << getSum(arr, n);
}