/**
 * Equilibrium Point
    Given an array arr of non-negative numbers. The task is to find the first equilibrium point in an array.
    The equilibrium point in an array is an index (or position) such that the sum of all elements before that
    index is the same as the sum of elements after it.

    Note:
        Return equilibrium point in 1-based indexing.
        Return -1 if no such point exists.

    Examples:
        Input: arr[] = [1, 3, 5, 2, 2]
        Output: 3

    Explanation: The equilibrium point is at position 3 as the sum of
    elements before it (1+3) = sum of elements after it (2+2).
        Input: arr[] = [1]
        Output: 1
    Explanation: Since there's only one element hence it's only the equilibrium point.
        Input: n = 3, arr[] = [1, 2, 3]
        Output: -1
    Explanation: There is no equilibrium point in the given array.
 */

#include <iostream>
#include <vector>
using namespace std;

int EquilibriumPoint(vector<int> arr)
{
    int mid = arr.size() / 2;
    int leftSum = 0, rightSum = 0, count = 1;

    for (int i = 0; i < mid; ++i)
    {
        // cout << arr[i] << " ";
        leftSum += arr[i];
        count++;
    }

    for (int i = mid + 1; i < arr.size(); ++i)
    {
        // cout << arr[i] << " ";
        rightSum += arr[i];
    }

    if (leftSum == rightSum)
    {
        return count;
    }
    else if (arr.size() <= 1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    // vector<int> arr = {1, 3, 5, 2, 2};
    vector<int> arr = {1, 3, 5, 2, 1, 3};
    // vector<int> arr = {1};
    // vector<int> arr = {-7, 1, 5, 2, -4, 3, 0};

    cout << EquilibriumPoint(arr) << endl;
    ;
}