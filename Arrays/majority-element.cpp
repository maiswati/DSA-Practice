// LeetCode 4: Majority Element
// Link: https://leetcode.com/problems/majority-element/
// Category: Arrays
// Better Approach: Map data type


#include<bits/stdc++.h>
using namespace std;

int getMajorityElement(int arr[], int n)
{
    map<int, int>mpp;
    for(int i=0; i<n; i++)
    {
        mpp[arr[i]]++;
    }
    for(auto it: mpp)
    {
        if(it.second > n/2)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{
    int n = 9;
    int arr[] =  {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int result = getMajorityElement(arr, n);
    cout << "The majority element is: " << result;
}

