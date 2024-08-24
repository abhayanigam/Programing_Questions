/*
    Generating all possible Subsequences 
    using Recursion including the empty one.

    Input :
        [1, 2, 3]
    Output :
        []
        [1],
        [2],
        [3],
        [1, 2],
        [1, 3],
        [2, 3],
        [1, 2, 3],
*/

#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(int arr[], int index, vector<int> &v, int size){
    if (index == size)
    {
        for(auto i : v){
            cout << i << " ";
        }

        if (v.size() == 0)
            cout << "{}";

        cout << endl;
        return ;
    }else{
        v.push_back(arr[index]);

        printSubsequences(arr,index+1,v,size);

        v.pop_back();

        printSubsequences(arr,index+1,v,size);
    }
}

int main(){
    int arr[] = {1, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> v;

    printSubsequences(arr,0,v,size);

    return 0;
}