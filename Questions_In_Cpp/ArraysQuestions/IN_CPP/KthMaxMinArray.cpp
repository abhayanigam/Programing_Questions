#include <iostream>
#include <algorithm>
using namespace std;

int kthSmallest(int arr[],int size,int k){
    sort(arr, arr + size);
    return arr[k-1];
}

int kthLargest(int arr[],int size,int k){
    sort(arr, arr + size,greater<int>());
    return arr[k-1];
}

int main()
{
    int arr[] = {2,3,4,5,6,7},size = sizeof(arr)/sizeof(int) , k = 2;

    cout << "K'th smallest element is " << kthSmallest(arr,size,k) << endl;
    
    cout << "K'th largest element is " << kthLargest(arr,size,k) << endl;

}