// LeetCode 5: Move Zeroes to end
// Link: https://leetcode.com/problems/move-zeroes/
// Category: Arrays
// Approach: Two Pointers Approach

#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>&nums)
{
    int n = nums.size();
    //get i to first zero
    int i;
    for(int l=0; l<n; l++)
    {
        if(nums[l] == 0)
        {
            i = l;
            break;
        }
    }
    for(int j=i+1; j<n; j++)
    {
        if(nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }
}
int main()
{
    vector<int>nums = {1, 0, 1, 3, 12};
    moveZeroes(nums);
    for(int i=0; i<nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}