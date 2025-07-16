// LeetCode 1: Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Category: Arrays
// Approach: Better


#include<bits/stdc++.h>
using namespace std;
int getLength(int arr[], int n)
{
    if(n==0) return 0;
    int lastSmaller = INT_MIN;
    int longest = 1;
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i] - 1 == lastSmaller)
        {
            count++;
            lastSmaller = arr[i];
        } else if(lastSmaller != arr[i])
        {
            count = 1;
            lastSmaller = arr[i];
        }
        longest = max(count, longest);
    }
    return longest;
}
int main() 
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    cout << "The longest consecutive sequence is: " << getLength(arr, n);
}