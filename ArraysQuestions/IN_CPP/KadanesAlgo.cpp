#include<iostream>
using namespace std;

int kadanesAlgo(int arr[], int size){
    int max_so_far = 0 , max_so_end = 0;

    for (auto i = 0; i < size; i++)
    {
        max_so_end = max_so_end + arr[i];

        if (max_so_end > max_so_far)
        {
            max_so_far = max_so_end;
        }
        if (max_so_end < 0)
        {
            max_so_end = 0;
        }
    }

    return max_so_far;
}

int main(){
    int size;
    cout << "Enter the size : " ;
    cin >> size;

    int arr[size];

    for (auto i = 0; i < size; i++)
    {
        cout << "Enter the element " << i+1 << " : ";
        cin >> arr[i];
    }

    cout << "Maximum contiguous sum is " << kadanesAlgo(arr,size);
    
}