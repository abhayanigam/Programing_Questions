#include <iostream>
#include <vector>
using namespace std;

int missingArray(vector<int> arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] != i + 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    // vector<int> arr = {1, 2, 3, 5};
    // int size = 5;
    vector<int> arr = {1};
    int size = 2;

    cout << "The missing number is : " << missingArray(arr, size) << endl;
}