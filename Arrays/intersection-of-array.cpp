// LeetCode 4: Intersection of two sorted arrays
// Link: https://leetcode.com/problems/intersection/
// Category: Arrays
// Approach: Two Pointer approach

#include<bits/stdc++.h>
using namespace std;
void intersect(int a[], int b[], int n1, int n2)
{
    int i=0, j=0;
    vector<int>intersect;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            i++;
        } else if(b[j] < a[i])
        {
            j++;
        } else {
            intersect.push_back(a[i]);
            i++;
            j++;
        }
    }
    for(int i=0; i<intersect.size(); i++)
    {
        cout << intersect[i] << " ";
    }
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int arr1[n1];
    int arr2[n2];
    for(int i=0; i<n1; i++)
    {
        cin >> arr1[i];
    }
    for(int j=0; j<n2; j++)
    {
        cin >> arr2[j];
    }
    intersect(arr1, arr2, n1, n2);
}