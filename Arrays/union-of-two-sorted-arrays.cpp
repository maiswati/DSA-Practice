// LeetCode 4: Union of two sorted arrays
// Link: https://leetcode.com/problems/union/
// Category: Arrays
// Approach: Two Pointer approach

#include<bits/stdc++.h>
using namespace std;
void unionArray(vector<int> a, vector<int>b, int n1, int n2)
{
    vector<int>unionArr;
    int i = 0, j = 0;
    while(i<n1 || j<n2)
    {
        if(a[i] <= b[j])
        {
            if(unionArr.empty() || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
                i++;
            }
        }
        else if(b[j] <= a[i])
        {
            if(unionArr.empty() || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
                j++;
            }
        }
    }
    while(i<n1)
    {
        if(unionArr.empty() || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
            i++;
        }
    }
    while(j<n2)
    {
        if(unionArr.empty() || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
            j++;
        }
    }
    for(int i=0; i<unionArr.size(); i++)
    {
        cout << unionArr[i] << " ";
    }
}
int main()
{
    int n1 = 5;
    int n2 = 3;
    vector<int>a = {1, 2, 3, 4, 5};
    vector<int>b = {1, 2, 7};
    unionArray(a, b, n1, n2);
}