/**
 * Given an integer array nums and an integer k,
 *  return true if there are two distinct indices i and j in
 *  the array *such that nums[i] == nums[j] and abs(i - j) <= k*.

    Example 1:
        Input: nums = [1,2,3,1], k = 3
        Output: true

    Example 2:
        Input: nums = [1,0,1,1], k = 1
        Output: true

    Example 3:
        Input: nums = [1,2,3,1,2,3], k = 2
        Output: false
 */

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsNearbyDuplicate(vector<int> &nums, int k)
{
    unordered_set<int> seen;

    for (int i = 0; i < nums.size(); i++)
    {
        if (!seen.insert(nums[i]).second)
        {
            return true;
        }
        if (i >= k)
        {
            seen.erase(nums[i - k]);
        }
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1};
    int k = 3;
    (containsNearbyDuplicate(arr, k) == 1) ? cout << "True" << endl : cout << "False" << endl;

    vector<int> arr1 = {1, 0, 1, 1};
    int k1 = 1;
    (containsNearbyDuplicate(arr1, k1) == 1) ? cout << "True" << endl : cout << "False" << endl;

    vector<int> arr2 = {1, 2, 3, 1, 2, 3};
    int k2 = 2;
    (containsNearbyDuplicate(arr2, k2) == 1) ? cout << "True" << endl : cout << "False" << endl;
}