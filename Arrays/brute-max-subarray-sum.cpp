// LeetCode 7: Brute Force approach of maximum Subarray sum
// Link: https://leetcode.com/problems/maximum-subarray-sum/
// Category: Arrays
// Approach: Brute Force Approach


#include<bits/stdc++.h>
using namespace std;
int getSum(int arr[], int n)
{
    int sum;
    int maxi = INT_MIN;
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum = 0;
            for(int k=i; k<j; k++)
            {
                sum += arr[k];
            }
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