// LeetCode 7: Next Permutation
// Link: https://leetcode.com/problems/next-permutation/
// Category: Next Permutation


#include<bits/stdc++.h>
using namespace std;
void getNextPermutation(vector<int> arr, int n)
{
    int Idx = -1;
    for(int i=n-1; i>=0; i--)
    {
        if(arr[i-1] < arr[i])
        {
            Idx = i-1;
            break;
        }
    }
    if(Idx == -1)
    {
        reverse(arr.begin(), arr.end());
    } else
    {
        for(int i=n-1; i>=0; i--)
    {
        if(arr[i] > arr[Idx])
        {
            swap(arr[i], arr[Idx]);
            break;
        }
    }
    reverse(arr.begin() + (Idx + 1), arr.end());
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 7;
    vector<int>arr = {2, 3, 5, 4, 1, 0, 0};
    getNextPermutation(arr, n);
}