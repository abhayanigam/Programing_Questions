#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end--;
    }
}

void display(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);

    cout << "Orginal array :"<< endl;
    display(arr,size);

    reverseArray(arr,0,size-1);

    cout << "After reverse an array :" << endl;
    display(arr,size);

    return 0;
}