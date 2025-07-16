// LeetCode 1: Longest Consecutive Sequence
// Link: https://leetcode.com/problems/longest-consecutive-sequence/
// Category: Arrays
// Approach: Optimal

#include<bits/stdc++.h>
using namespace std;
int getLength(int arr[], int n)
{
    set<int>st;
    int longest = 1;
    int x;
    for(int i=0; i<n; i++)
    {
        st.insert(arr[i]);
    }
    for(auto it:st)
    {
        if(st.find(it-1) == st.end())
        {
            int count = 1;
            x = it;
            while(st.find(x+1) != st.end())
            {
                x = x+1;
                count++;
            }
            longest = max(longest, count);
        }
    }
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
    cout << "The longest sequence is: " << getLength(arr, n);
}