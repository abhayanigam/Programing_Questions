#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int *arr, int k, int size)
{
    for (int i = 0; i < size; i += k)
    {
        int left = i;

        int right = min(i + k - 1, size - 1);

        while (left < right)
        {
            swap(arr[left++], arr[right--]);
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 3;

    int size = sizeof(arr) / sizeof(arr[0]);

    reverse(arr, k, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}