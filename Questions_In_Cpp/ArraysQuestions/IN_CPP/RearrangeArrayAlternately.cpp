#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

void alternateArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i += 2)
    {
        cout << "Min Element = " << arr[i] << endl;
        if (i + 1 < arr.size())
        {
            cout << "Max Element = " << arr[i + 1] << endl;
        }
    }
}

void alternateMinMax2(vector<int> arr)
{
    int minIdx = 0, maxIdx = arr.size() - 1;

    while (minIdx <= maxIdx)
    {
        cout << "Min Element = " << arr[minIdx++] << endl;
        cout << "Max Element = " << arr[maxIdx--] << endl;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // alternateArray(arr);
    alternateMinMax2(arr);
}