#include <iostream>
using namespace std;

bool LinearSearch(int *arr,int size, int k){
    if (size == 0)
    {
        return false;
    }
    if (k == arr[0])
    {
        return true;
    }

    return LinearSearch(arr+1,size-1,k);
}

int main(){
    int arr[5] = {3,5,1,2,6};
    int size = 5, k = 4;

    bool ans = LinearSearch(arr,size,k);

    if (ans)
    {
        cout << "Element Present" << endl;
    }else{
        cout << "Element Absent" << endl;
    }
}