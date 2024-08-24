#include <iostream>
using namespace std;

int getSum(int *arr, int size){
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }

    return (arr[0] + getSum(arr+1,size-1));
}

int main(){
    int arr[5] = {2,3,4,5,6};
    int size = 5;

    cout << "The sum is : " << getSum(arr,size) << endl;
}