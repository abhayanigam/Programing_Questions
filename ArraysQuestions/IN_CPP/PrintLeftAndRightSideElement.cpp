#include <iostream>
#include <vector>
using namespace std;

void LeftAndRightSide(vector<int> arr)
{
    int mid = arr.size() / 2;
    cout << "Mid : " << arr[mid] << endl;

    // Print left side elements
    cout << "Left side elements: ";
    for (int i = 0; i < mid; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Print right side elements
    cout << "Right side elements: ";
    for (int i = mid + 1; i < arr.size(); ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // vector<int> arr = {1, 3, 5, 2, 2};
    // vector<int> arr = {11, 9, 12};
    // vector<int> arr = {4, 2, 5, 7};
    // vector<int> arr = {4, 3, 7, 8, 6, 2, 1};
    vector<int> arr = {4, 7, 3, 8, 2};

    LeftAndRightSide(arr);
}