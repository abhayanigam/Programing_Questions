#include <iostream>
#include <algorithm>
using namespace std;

int findMinDiff(int arr[], int size, int m){
    if (size == 0 || m == 0)
    {
        return 0;
    }
    sort(arr,arr+size);

    if (size < m)   
    {
        return -1;
    }

    int min_diff = INT_MAX;

    for (int i = 0; i+m-1 < size; i++)
    {
        int diff = arr[i+m-1] - arr[i];
        if (diff < min_diff)
        {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main(){
    int arr[] = { 12, 4,  7,  9,  2,  23, 25, 41, 30,40, 28, 42, 30, 44, 48, 43, 50 };
    int m = 7; // Number of students
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Minimum difference is " << findMinDiff(arr, size, m) <<endl;
}