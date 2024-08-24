#include <iostream>
#include <vector>
using namespace std;

int countInversion(vector<int> arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] > arr[j])
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> arr = {2, 4, 1, 3, 5};
    vector<int> arr1 = {2, 3, 4, 5, 6};
    vector<int> arr2 = {10, 10, 10};

    cout << countInversion(arr) << endl;
    cout << countInversion(arr1) << endl;
    cout << countInversion(arr1) << endl;
}