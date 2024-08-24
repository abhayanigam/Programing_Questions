#include <iostream>
using namespace std;

void arrayRotate(int arr[], int k, int size){
    // int mod = k%size;
    // cout << "The value of Mod is " << mod << endl;

    for (int i = 0; i < size; i++)
    {
        // cout << arr[(mod+i)%size] << " ";
        cout << arr[(k+i)%size] << " ";
    }
    printf("\n");
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
    cout << "Enter the size : ";
    int size;
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element : ";
        cin >> arr[i];
    }

    cout << "Enter the index value : ";
    int k;
    cin >> k;

    cout << "Entered Array is :" << endl;
    display(arr,size);

    cout << "After Rotating from " << k << endl;
    arrayRotate(arr,k,size);
    
}