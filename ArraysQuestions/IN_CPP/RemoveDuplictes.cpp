#include <iostream>
#include <vector>
using namespace std;

void findAndRemoveDuplicates(vector<int> arr)
{
    int count = 0;
    vector<int> arr1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == arr[i + 1])
        {
            arr1.push_back(arr[i]);
        }
        else
        {
            arr1.push_back(arr[i]);
        }
    }
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4, 5, 5};

    findAndRemoveDuplicates(arr);
}