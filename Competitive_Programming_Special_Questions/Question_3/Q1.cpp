/*
    Q. Problem Statement
            Klaus thinks that he is a genius. Antonio wants to test Klaus’s IQ for that he asked him a problem.
            Given an array A of size N and an integer, K. Antonio asked Klaus to divide array A into K nonempty subsequence. Such that each element of the array should be part of exactly one subsequence. Now the Goodness of this division will be equal to
            Example:- For array A {2,4,3,6,1} dividing this array into two subsequence {2,4,1} and {3,6} the the Goodness of this division will be =(4-1)+(6-3)= 6.
            Now Antonion wants the goodness of the division to be the maximum possible.
            You have to help Klaus So that he remains a genius in front of Antonio.
            Your task is to determine the Maximum value of Goodness of the division.
        
        Note:-
        A subsequence is a sequence that can be derived from another sequence by deleting some elements without changing the order of the remaining elements.
        
        Input Format
            The first line contains two space-separated integers N and K.
            The second line contains N space-separated integers, the array A.
        
        Output Format
            Print the maximum value of Goodness of the division.

        Constraints
            1<=K<=N<=105
            1<=A[i]<=109
        
        Sample Input 1
            6 2
            2 4 3 6 1 3
        
        Sample Output 1
            7

        Explanation of Sample 1
            For test case 1
            For getting maximum goodness one of the possible division is {2,4,3}, {6,1,3}
            And goodness = (4-2)+(6-1)=7
*/

#include <iostream>
#include <algorithm>
using namespace std;

void print(int arr[], int size){
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}

int merging(int arr[], int start, int mid, int end){
    int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1],right[n2];

    for (int i = 0; i < n1; i++)
    {
        left[i] = arr[start + i];
    }

    for (int j = 0; j < n2; j++)
    {
        right[j] = arr[mid + 1 + j];
    }

    sort(left,left+n1);
    sort(right,right+n1);

    return ((left[0]-left[n1-1]) + (right[0]-right[n2-1]));
}

int mergeSort(int arr[], int start, int end, int k){
    if (start >= end)
        return 0;

    int mid = start + (end - start) / k;

        mergeSort(arr,start,mid,k);
        mergeSort(arr,mid+1,end,k);

        return merging(arr,start, mid ,end);
}

int main(){
    // int arr[6] = {2,4,3,6,1,3};

    // int k = 2;

    int size,k;
    cin >> size >> k;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    } 
    cout <<  abs(mergeSort(arr,0,size-1,k)) <<endl;
}