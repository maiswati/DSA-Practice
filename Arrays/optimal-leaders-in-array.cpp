// LeetCode 7:  Optimal force approach for Leaders in an array
// Link: https://leetcode.com/problems/maximum-subarray-sum/
// Category: Arrays
// Approach: Optimal

#include<bits/stdc++.h>
using namespace std;
void getLeaders(int arr[], int n)
{
    vector<int>ans;
    int maxi = INT_MIN;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i] > maxi)
        {
            maxi = arr[i];
            ans.push_back(arr[i]);
        }
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 6;
    int arr[] = {10, 22, 12, 3, 0, 6};
    getLeaders(arr, n);
}