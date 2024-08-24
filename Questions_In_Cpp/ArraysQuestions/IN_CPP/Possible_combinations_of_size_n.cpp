/*
    Given an array of size n, generate and print all possible combinations of r elements in array.
    For example, if input array is {1, 2, 3, 4} and r is 2,
                then output should be {1, 2}, {1, 3}, {1, 4}, {2, 3}, {2, 4} and {3, 4}.
*/

#include <iostream>
using namespace std;

void combinationUtil(int arr[], int data[], int start, int end, int index, int r)
{
    if (index == r)
    {
        for (int j = 0; j < r; j++)
            printf("%d ", data[j]);
        printf("\n");
        return;
    }
    for (int i = start; i <= end && end - i + 1 >= r - index; i++)
    {
        data[index] = arr[i];
        combinationUtil(arr, data, i + 1, end, index + 1, r);
    }
}

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {2, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int r = 3;
    int r = 7;
    int data[r];

    combinationUtil(arr, data, 0, n - 1, 0, r);
}