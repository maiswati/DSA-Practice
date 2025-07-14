// LeetCode 1: Missing Number
// Link: https://leetcode.com/problems/missing-number/
// Category: Arrays
// Approach: Used simple sum math problem

#include<bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>nums)
{
    int n = nums.size();
    int original_sum = 0;
    int nums_sum  = 0;
    for(int i=1; i<=n; i++)
    {
        original_sum += i;
    }
    for(int i=0; i<n; i++)
    {
        nums_sum += nums[i];
    }
    int result = original_sum - nums_sum;
    return result;
}

int main()
{
    vector<int>nums = {0, 1, 3};
    int result = missingNumber(nums);
    cout << "Missing number is: " << result << endl;
}

