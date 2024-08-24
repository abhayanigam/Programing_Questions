#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void move(vector<int>& arr){
    sort(arr.begin(), arr.end());
}

int main(){
    vector<int> arr = { -1, 2, -3, 4, 5, 6, -7, 8, 9 };

    move(arr);

    for(auto e : arr){
        cout << e << " ";
    }
}