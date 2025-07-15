// LeetCode 7:  Brute force approach for Leaders in an array
// Link: https://leetcode.com/problems/maximum-subarray-sum/
// Category: Arrays
// Approach: Brute Force Approach

#include<bits/stdc++.h>
using namespace std;
void getLeaders(int arr[], int n)
{
    vector<int>leaders;
    for(int i=0;i<n;i++)
    {
        int leader = true;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i] < arr[j])
            {
                leader = false;
                break;
            }
        }
        if(leader == true)
        {
            leaders.push_back(arr[i]);
        }
    }
    for(int i=0; i<leaders.size(); i++)
    {
        cout << leaders[i] << " ";
    }
}
int main()
{
    int n = 6;
    int arr[] = {10, 22, 12, 3, 0, 6};
    getLeaders(arr, n);
}


