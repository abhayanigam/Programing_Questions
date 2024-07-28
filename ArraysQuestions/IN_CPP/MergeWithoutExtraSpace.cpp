#include <iostream>
#include <vector>
using namespace std;

void mergingTwoVector(vector<int> arr1, vector<int> arr2)
{
    int i = 0, j = 0, k = 0;
    vector<int> arr3(arr1.size() + arr2.size());

    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else
        {
            arr3[k++] = arr2[j++];
        }
    }

    while (i < arr1.size())
    {
        arr3[k++] = arr1[i++];
    }

    while (j < arr2.size())
    {
        arr3[k++] = arr2[j++];
    }

    for (int i = 0; i < arr3.size(); i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7};
    vector<int> arr2 = {0, 2, 6, 8, 9};

    mergingTwoVector(arr1, arr2);
}