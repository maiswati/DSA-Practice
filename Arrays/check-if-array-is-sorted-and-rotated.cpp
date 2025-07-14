// LeetCode 2: Check if array is Sorted and Rotated
// Link: https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
// Category: Arrays
// Approach: Iterating through array and counting number of times a[i] > a[(i+1)%n] condition becomes true.
         //  if count == 0 : Array is sorted.
         //  if count == 1 : Array is sorted and rotated.
         //  if count == 2 : Array is not sorted.

#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>nums)
{
    int n = nums.size();
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(nums[i] > nums[(i+1)%n])
        {
            count++;
        }
    }
    return count<=1;
}

int main()
{
    vector<int>nums = {3, 4, 5, 1, 2};
    bool result = check(nums);
    cout << "Result: " << result << endl;
    return 0;
}