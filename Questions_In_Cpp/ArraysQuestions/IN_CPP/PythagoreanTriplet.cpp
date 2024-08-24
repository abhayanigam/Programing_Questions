/**
 * Pythagorean Triplet
    Difficulty: MediumAccuracy: 24.77%Submissions: 212K+Points: 4
    Given an array arr of n integers, write a function that returns true if there is a triplet (a, b, c) from the array (where a, b, and c are on different indexes) that satisfies a2 + b2 = c2, otherwise return false.

    Example 1:

    Input:
    N = 5
    Arr[] = {3, 2, 4, 6, 5}
    Output: Yes
    Explanation: a=3, b=4, and c=5 forms a
    pythagorean triplet.
    Example 2:

    Input:
    N = 3
    Arr[] = {3, 8, 5}
    Output: No
    Explanation: No such triplet possible.
    Your Task:
    You don't have to take any input or print any thing. You have to complete the function checkTriplet() which takes an array arr, a single integer n, as input parameters and returns boolean denoting answer to the problem.
    Note: The driver will print "Yes" or "No" instead of corresponding to the boolean value returned.

    Expected Time Complexity: O(n+max(Arr[i])2)
    Expected Auxiliary Space: O(max(Arr[i]))
 */

// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <unordered_set>
#include <alg.h>
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

bool isTriplet(vector<int> &ar, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int x = ar[i] * ar[i], y = ar[j] * ar[j], z = ar[k] * ar[k];

                if (x == y + z || y == x + z || z == x + y)
                    return true;
            }
        }
    }

    return false;
}

int main()
{
    vector<int> arr = {3, 2, 4, 6, 5};
    vector<int> arr1 = {3, 8, 5};

    (isTriplet(arr, arr.size())) ? cout << "Yes" << endl : cout << "No" << endl;
    (isTriplet(arr1, arr1.size())) ? cout << "Yes" << endl : cout << "No" << endl;
}