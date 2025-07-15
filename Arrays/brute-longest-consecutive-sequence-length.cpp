// LeetCode 7:  Brute force approach for longest consecutive subsequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Category: Arrays
// Approach: Brute


#include<bits/stdc++.h>
using namespace std;
int getLength(vector<int>arr, int n)
{
    int longest = 1;
    int currLen = 1;
    if(n==0)
    {
        return 0;
    }
    for(int i=1; i<n; i++)
    {
        if(arr[i] == arr[i-1])
        {
            continue;
        } else if(arr[i] == arr[i-1] + 1)
        {
            currLen++;
        } else {
            currLen = 1;
        }
        longest = max(longest, currLen);
    }
    return longest;
}
int main()
{
    int n = 10;
    vector<int> arr = {0,3,7,2,5,8,4,6,0,1};
    cout << "The longest length of consequtive sequence is: " << getLength(arr, n);
}