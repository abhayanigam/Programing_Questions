/**
 * Given an array nums of size n, return the majority element.

The majority element is the element that appears more than ⌊n / 2⌋ times.
You may assume that the majority element always exists in the array.

Example 1:

Input: nums = [3,2,3]
Output: 3
Example 2:

Input: nums = [2,2,1,1,1,2,2]
Output: 2
 */

#include <iostream>
#include <vector>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int ans;
    int count = 0;

    for (const int num : nums)
    {
        if (count == 0)
            ans = num;
        count += num == ans ? 1 : -1;
    }

    return ans;
}

int main()
{
    vector<int> nums = {3, 2, 3};
    cout << majorityElement(nums) << endl;

    vector<int> nums1 = {2, 2, 1, 1, 1, 2, 2};
    cout << majorityElement(nums1) << endl;
}