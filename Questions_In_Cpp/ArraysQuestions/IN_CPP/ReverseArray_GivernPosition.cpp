#include <iostream>
#include <vector>
using namespace std;

vector <int> reverse(vector<int> arr){
    int start = 0, end = arr.size()-1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    return arr;
}

vector<int> reversePostion(vector<int> arr, int pos){
    int start = pos+1, end = arr.size()-1;

    while (start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    return arr;
}

void print(vector <int> ans){
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }cout << endl;
}

int main(){
    vector <int> arr;

    arr.push_back(11);
    arr.push_back(7);
    arr.push_back(3);
    arr.push_back(12);
    arr.push_back(4);

    cout << "Original Array : ";
    print(arr);

    vector <int> ans = reverse(arr);

    cout << "Printing reverse array : ";
    print(ans);

    //Reversing an array after a postion
    int pos = 2;

    vector <int> ans2 = reversePostion(arr,pos);

    cout << "Printing reverse array after a postion : ";
    print(ans2);
}