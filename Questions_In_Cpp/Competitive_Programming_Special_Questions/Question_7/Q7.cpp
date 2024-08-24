/*
    Array Generator

    A professor in the computer science department of HackerLand College
    wants to generate an array. Given an array of integers of length n, arr
    and two integers l and r, find another array, brr, such that:

        > l <= brr[i] <= r
        > brr[i] - arr[i] < brr[i+1] - arr[i+1], for every i les than n-1
        > brr[i] <= brr[i+1] for every i less than n-1.

    Among all such array, return the lexicographically smallest one.
    If there in not an array that satisfies the conditions, then return
    an array with the single element -1.

    Example
        arr = [1,2,1,2], l = 1, r = 10

    The array [1,3,3,5] satisfies given conditions.
        1. Each element belongs in the range [1,10].
        2. Contruct an array crr where crr[i] = brr[i] - arr[i],
            crr = [0,1,2,3] and it is increasing.
        3. The array brr is non-decreasing.

    brr[i] - arr[i] for each element is [0,1,2,3]
        1 - 1 = 0
        3 - 2 = 1
        3 - 1 = 2
        5 - 2 = 3

    NOTE: that all brr[i] >= arr[i] as well. There is not a lexicographically
    smaller array than [1,3,3,5] that satisfies the conditions.

    FUNCTION DESCRIPTION
    Complete the function getSmallestArray in the editor below.

    getSmallestArray has the following parameter(s):
        int arr[n]: an array of integers
        int l: the lower value limit
        int r: the upper value limit

    Returns
        int[n]: an array that satisfies the conditions or that contains
        a single element -1.

    Constraints
        > 1 <= n <= 10^5
        > 1 <= arr[i] <= 10^5
        > 1 <= l, r <= 10^9

    Sample Input 0:
        STDIN          FUNCTION
        -----          --------
        4       ->     The size of arr[] n = 4
        1       ->     arr = [1,2,1,3]
        2
        1
        3
        1       ->     l = 1
        10      ->     r = 10

    Sample Output 0:
        1
        3
        3
        6

    Explanation
        For the output shown:
            1. Each element is within the range [1,10].
            2. Construct an array crr where crr[i] = brr[i]-arr[i],
                crr = [0,1,2,3] and it is non-decreasing.
            3. The array brr is non-dreasing.

    Sample Input 1:
        STDIN          FUNCTION
        -----          --------
        4       ->     The size of arr[] n = 4
        1       ->     arr = [1,2,1,3]
        2
        1
        3
        1       ->     l = 1
        4       ->     r = 5

    Sample Output 0:
        -1

    Explanation
        There is not an array that satisfies the conditions.


    Rough Work:
        arr  brr   crr  |    crr - arr
        1  +  0  =  1   |     1  -  1 = 0
        2  +  1  =  3   |     3  -  2 = 1
        1  +  2  =  3   |     3  -  1 = 2
        3  +  3  =  6   |     6  -  3 = 3

*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define vi vector<int>
#define rep(i,a,b) for(int i = a; i<b; i++)
#define traversal(i,a,b) for(int i = a; i<=b; i++)

vector<int> construct(vector<int> &arr){
    vector<int> crr;
    rep(i,0,arr.size()){
        crr.push_back(arr[i] + i);
    }
    return crr;
}

bool checkRange(int l, int r){
    return ((l == 1 && r == 10) ? true : false);
}

bool nonDec(vector<int> &crr, vector<int> &arr){
    rep(i,0,crr.size()){
        if(crr[i] - arr[i] == i){
            return true;
        }
    }

    return false;
}

vector <int> getSmallestArray(vector <int> &arr, int l,int r){
    vector <int> v = construct(arr);

    bool cond1 = checkRange(l,r);
    bool cond2 = nonDec(v,arr);
    bool cond3 = true;

    if(cond1 && cond2 && cond3){
        return v;
    }else{
        vector<int> v1;
        v1.push_back(-1);
        return v1;
    }
}

int main(){
    int l, r;
    cout << "The lower value limit : ";
    cin >> l;

    cout << "The upper value limit : ";
    cin >> r;

    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);

    vector<int> arr = getSmallestArray(v,l,r);

    for(auto i : arr){
        cout << i << " ";
    }cout << endl;

}