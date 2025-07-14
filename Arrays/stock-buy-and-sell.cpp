// LeetCode 7: Single Number
// Link: https://leetcode.com/problems/single-number/
// Category: Arrays
// Approach: XOR technique

#include<bits/stdc++.h>
using namespace std;
int getProfit(int arr[], int n)
{
    int sellDay;
    int buyDay;
    int sellAt = arr[0];
    int buyAt = arr[0];
    for(int i=0; i<n; i++)
    {
        if(arr[i] < buyAt)
        {
            buyAt = arr[i];
            buyDay = i;
        }
    }
    for(int j=0; j<n; j++)
    {
        if(arr[j] > sellAt && j!=buyDay)
        {
            sellAt = arr[j];
            sellDay = j;
        }
    }
    if(sellDay == arr[0])
    {
        return -1;
    }
    return sellAt - buyAt;
}
int main()
{
    int arr[] = {10, 7, 5, 8, 11, 9};
    int n = 6;
    int profit = getProfit(arr, n);
    cout << "The profit is: " << profit;
}