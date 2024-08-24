/**
 * Given an array arr[] of size N.
 * The task is to find the sum of the contiguous subarray
 * within a arr[] with the largest sum.

    Example:
        Input: arr = {-2,-3,4,-1,-2,1,5,-3}
        Output: 7
        Explanation: 4 + (-1) + (-2) + 1 + 5 = 7

        Input: arr = {2}
        Output: 2
        Explanation: The subarray {2} has the largest sum 2.

        Input: arr = {5,4,1,7,8}
        Output: 25
        Explanation: The subarray {5,4,1,7,8} has the largest sum 25.

    Kadane’s Algorithm (O(n) time and O(1) Space)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void maxSubArraySum(const vector<int> &arr)
{
    vector<int> dp(arr.size(), 0);

    dp[0] = arr[0];

    int ans = dp[0];

    for (int i = 1; i < arr.size(); i++)
    {
        dp[i] = max(arr[i], arr[i] + dp[i - 1]);
        ans = max(ans, dp[i]);
    }
    cout << "Ans is : " << ans;
}

int main()
{
    maxSubArraySum(vector<int>{-2, -3, 4, -1, -2, 1, 5, -3});
}