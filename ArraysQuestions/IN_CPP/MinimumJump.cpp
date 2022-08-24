#include <iostream>
#include <algorithm>
using namespace std;

int decideJumps(int *arr, int size, int currPos){
    if (currPos >= size-1)
        return 0;

    int minJump = arr[size-1];
    int maxJump = arr[currPos];

    while (maxJump > 0)
    {
        minJump = min(minJump, 1 + decideJumps(arr,size,currPos+maxJump));
        maxJump--;
    }
    return minJump;
}

int jump(int * arr, int size){
    return decideJumps(arr,size,0);
}

int main(){
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int N = 11;

    // cout <<"Min Jump : " <<  minJumps(arr,N) << endl;
    cout << jump(arr,N) << endl;
}