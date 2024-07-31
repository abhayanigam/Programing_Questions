/**
 * Find First and Last Position of Element in Sorted Array
Solved
Medium
Topics
Companies
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.



Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]
 */

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> arr;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++)
        {
            if (target == nums[i])
            {
                arr.push_back(i);
            }
        }

        if (arr.empty())
        {
            arr = {-1, -1};
            return arr;
        }
        else if (arr.size() < 2)
        {
            arr.push_back(arr[0]);
            return arr;
        }
        else
        {
            vector<int> a;
            a.push_back(arr.front());
            a.push_back(arr.back());
            return a;
        }
    }
};