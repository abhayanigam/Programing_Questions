/*
    Example 1:
        Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
        Output: [1,2,2,3,5,6]
    Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
        The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

    Example 2:
        Input: nums1 = [1], m = 1, nums2 = [], n = 0
        Output: [1]
    Explanation: The arrays we are merging are [1] and [].
        The result of the merge is [1].

    Example 3:
        Input: nums1 = [0], m = 0, nums2 = [1], n = 1
        Output: [1]
    Explanation: The arrays we are merging are [] and [1].
        The result of the merge is [1].

    Note that because m = 0, there are no elements in nums1.
    The 0 is only there to ensure the merge result can fit in nums1.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = 0, j = 0;
    vector<int> result;

    while (i < m && j < n)
    {
        if (nums1[i] < nums2[j])
        {
            result.push_back(nums1[i++]);
        }
        else
        {
            result.push_back(nums2[j++]);
        }
    }

    while (i < m)
    {
        result.push_back(nums1[i++]);
    }
    while (j < n)
    {
        result.push_back(nums2[j++]);
    }

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}

// For O(m+n) time Complexity
void merge2(vector<int> &nums1, int m, vector<int> &nums2, int n)
{
    int i = m - 1, j = n - 1, k = m + n - 1;

    while (j >= 0)
    {
        if (i >= 0 && nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}, nums2 = {2, 5, 6};
    int m = 3, n = 3;
    merge(nums1, m, nums2, n);
    merge2(nums1, m, nums2, n);

    vector<int> nums11 = {1}, nums22 = {};
    int m1 = 1, n1 = 0;
    merge(nums11, m1, nums22, n1);
    merge2(nums11, m1, nums22, n1);

    vector<int> nums111 = {0}, nums222 = {1};
    int m11 = 0, n11 = 1;
    merge(nums111, m11, nums222, n11);
    merge2(nums111, m11, nums222, n11);
}