// LeetCode 7: Rearrange Elements based on conditions
// Link: https://leetcode.com/problems/rearrange-array-elements-by-sign/
// Category: Arrays
// Approach: Using sign and even odd property


#include<bits/stdc++.h>
using namespace std;
void getRearrangedArray(int arr[], int n)
{
    vector<int>ans(n, 0);
    int posIdx = 0;
    int negIdx = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            ans[negIdx] = arr[i];
            negIdx += 2;
        } else{
            ans[posIdx] = arr[i];
            posIdx += 2;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n = 6;
    int arr[] = {3,1,-2,-5,2,-4};
    getRearrangedArray(arr, n);
}