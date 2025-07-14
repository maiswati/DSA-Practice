// LeetCode 4: Rotate Array
// Link: https://leetcode.com/problems/rotate-array/
// Category: Arrays
// Approach: Reverse array by parting and fully.

#include<bits/stdc++.h>
using namespace std;

void rotate(vector<int>&nums, int k)
{
    int n = nums.size();
    k = k%n;
    reverse(nums.begin(), nums.begin() + (n - k));
    reverse(nums.begin() + (n - k), nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{
    vector<int>nums = {1,2,3,4,5,6,7};
    int k = 3;
    rotate(nums, k);
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}