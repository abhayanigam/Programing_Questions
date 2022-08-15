#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> merge(vector<int> &v1,vector<int> &v2){
    vector<int> arr;
    int i = 0, j = 0, k = 0;
    while (i<v1.size() && j<v2.size())
    {
        if (v1[i] <= v2[j])
        {
            arr.push_back(v1[i++]);
        }else{
            arr.push_back(v2[j++]);
        }
    }
    while (i<v1.size()) {
        arr.push_back(v1[i++]);
    }
    while (j<v2.size()) {
        arr.push_back(v2[j++]);
    }

    return arr;
}

double findMedian(vector<int> &v){
    sort(v.begin(),v.end());

    // Check for even case (if number of elements are even or not)
    if (v.size()%2 != 0)
        return (double)v[v.size()/2];
    return ((double)(v[(v.size()-1)/2] + v[v.size() / 2]) / 2.0);
}

int main(){
    vector <int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);

    vector <int> arr2;
    arr2.push_back(3);
    arr2.push_back(4);

    vector <int> v = merge(arr1,arr2);

    cout << findMedian(v) << endl;;
}