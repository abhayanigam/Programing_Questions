#include <iostream>
using namespace std;

int binarySearch_UsingLoop(int *arr,int size, int key){
    int start = 0;
    int end = size-1;

    while(start <= end){
        int mid = start + (end - start) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }

        // Go to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }

        // Go to left part
        if (key < arr[mid])
        {
            end = mid - 1;
        }
    }
    return -1;
}

bool binarySearch_UsingRecursion(int *arr, int start, int end, int key){
    
    int mid = start + (end-start)/2;

    if(start>end)
        return false;

    if(arr[mid] == key)
        return true;

    if(arr[mid] < key) {
        return binarySearch_UsingRecursion(arr, mid+1, end, key);
    }
    else{
        return binarySearch_UsingRecursion(arr, start, mid-1, key);
    }
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    // Loop Method:
    cout << "Index of 6 is : " << binarySearch_UsingLoop(even,6,6) << endl;
    cout << "Index of 6 is : " << binarySearch_UsingLoop(odd,5,14) << endl;

    // Recursion Method:
    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 222;

    cout << "Present or not " << binarySearch_UsingRecursion(arr, 0, size-1, key) << endl;
}
