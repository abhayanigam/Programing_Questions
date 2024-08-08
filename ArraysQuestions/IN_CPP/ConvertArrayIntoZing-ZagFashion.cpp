/**
 * Convert array into Zig-Zag fashion

    Given an array arr of distinct elements of size n, the task is to rearrange the elements of
    the array in a zig-zag fashion so that the converted array should be in the below form:

    arr[0] < arr[1]  > arr[2] < arr[3] > arr[4] < . . . . arr[n-2] < arr[n-1] > arr[n].

    Note: Modify the given arr[] only, If your transformation is correct,
        the output will be 1 else the output will be 0.

    Examples
        Input: n = 7, arr[] = {4, 3, 7, 8, 6, 2, 1}
        Output: 1
        Explanation: After modification the array will look like 3 < 7 > 4 < 8 > 2 < 6 > 1,
                    the checker in the driver code will produce 1.
        Input: n = 5, arr[] = {4, 7, 3, 8, 2}
        Output: 1
        Explanation: After modification the array will look like 4 < 7 > 3 < 8 > 2 hence output will be 1.

    Expected Time Complexity: O(n)
    Expected Auxiliary Space: O(1)
 */

// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

#define vi vector<int>
#define vs vector<string>
#define st set<int>
#define vvi vector<vi>
#define vvs vector<vs>
#define ppi pair<int, int>
#define ppi pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

void zigZagFashion(vector<int> &arr)
{
    bool flag = true;

    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (flag)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
            else
            {
                if (arr[i] < arr[i + 1])
                {
                    swap(arr[i], arr[i + 1]);
                }
            }
            flag = !flag; // flip the flag
        }
    }
}

int main()
{
    // vector<int> arr = {4, 3, 7, 8, 6, 2, 1};
    vector<int> arr = {4, 7, 3, 8, 2};

    zigZagFashion(arr);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    return 0;
}