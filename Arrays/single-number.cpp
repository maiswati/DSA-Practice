// LeetCode 7: Single Number
// Link: https://leetcode.com/problems/single-number/
// Category: Arrays
// Approach: XOR technique

#include<bits/stdc++.h>
using namespace std;

int singleNumber(vector<int>nums)
{
    int result = 0;
    for(int i=0; i<nums.size(); i++)
    {
        result ^= nums[i];
    }
    return result;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    int result = singleNumber(nums);
    cout << "Single number is: " << result << endl;
}