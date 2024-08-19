/*
    Given an array arr[] of size N, the task is to find the length
    of the Longest Increasing Subsequence (LIS) i.e.,
    the longest possible subsequence in which the elements of
    the subsequence are sorted in increasing order.

    Examples:

    Input: arr[] = {3, 10, 2, 1, 20}
    Output: 3
    Explanation: The longest increasing subsequence is 3, 10, 20

    Input: arr[] = {50, 3, 10, 7, 40, 80}
    Output: 4
    Explanation: The longest increasing subsequence is {3, 7, 40, 80}

    Input: arr[] = {30, 20, 10}
    Output:1
    Explanation: The longest increasing subsequences are {30}, {20} and (10)

    Input: arr[] = {10, 20, 35, 80}
    Output: 4
    Explanation: The whole array is sorted
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lisEndAtIth(vector<int> &arr, int i, vector<int> &dp)
{
    if (i == 0)
    {
        return 1;
    }

    if (dp[i] != -1)
    {
        return dp[i];
    }

    int mx = 1;
    for (int prev = 0; prev < i; prev++)
    {
        if (arr[prev] < arr[i])
        {
            mx = max(mx, lisEndAtIth(arr, prev, dp) + 1);
        }
    }
    dp[i] = mx;
    return dp[i];
}

int lis(vector<int> &arr)
{
    vector<int> dp(arr.size(), -1);

    int res = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        res = max(res, lisEndAtIth(arr, i, dp));
    }
    return res;
}

int main()
{
    vector<int> arr = {10, 22, 9, 33, 21, 50, 41, 60};
    cout << "Length of lis is : " << lis(arr) << endl;
}