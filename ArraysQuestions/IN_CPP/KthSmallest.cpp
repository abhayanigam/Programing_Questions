/**
 * Kth Smallest\
    Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array. It is given that all array elements are distinct.

    Note:-  l and r denotes the starting and ending index of the array.

    Example 1:

    Input:
    n = 6
    arr[] = 7 10 4 3 20 15
    k = 3
    l=0 r=5

    Output :
    7

    Explanation :
    3rd smallest element in the given
    array is 7.
    Example 2:

    Input:
    n = 5
    arr[] = 7 10 4 20 15
    k = 4
    l=0 r=4

    Output :
    15

    Explanation :
    4th smallest element in the given
    array is 15.
 */

#include <bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int N, int K)
{
    sort(arr, arr + N);
    return arr[K - 1];
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int N = sizeof(arr) / sizeof(arr[0]), K = 3;

    // Function call
    cout << "K'th smallest element is "
         << kthSmallest(arr, N, K);
    return 0;
}