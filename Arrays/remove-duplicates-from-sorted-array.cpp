// LeetCode 2: Remove Duplicated from Sorted Array
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Category: Arrays
// Approach: Hash map to store complements and indices


#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>nums)
{
    int n = nums.size();
    int i=0;
    for(int j=i+1; j<n; j++)
    {
        if(nums[j]!=nums[i])
        {
            nums[i+1] = nums[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    vector<int>nums = {1, 1, 2};
    int result = removeDuplicates(nums);
    cout << "The total number of unique elements is: " << result << endl;
    return 0;
}