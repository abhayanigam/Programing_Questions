#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void sort012(int arr[], int size)
{
    int low = 0, mid = 0, high = size - 1;

    while (mid <= high)
    {
        switch (arr[mid])
        {
        // If the element is 0.
        case 0:
            swap(arr[low++], arr[mid++]);
            break;

        // If the element is 1.
        case 1:
            arr[mid++];
            break;

        // If the element is 2.
        case 2:
            swap(arr[mid], arr[high--]);
            break;

        default:
            break;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void printArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int arr[] = {0,1,1,0,1,2,1,2,0,0,0,1};
    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};

    int size = sizeof(arr) / sizeof(int);

    cout << "Array befor segregation" << endl;
    // printArray(arr, size);
    printArray(arr);

    // sort012(arr,size);
    sort(arr.begin(), arr.end());

    cout << "Array after segregation" << endl;
    // printArray(arr, size);
    printArray(arr);
}