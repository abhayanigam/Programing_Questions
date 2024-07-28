#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int> arr, int sum)
{
    bool flag = false;

    vector<int> res;

    for (int i = 0; i < arr.size(); i++)
    {
        int current = arr[i];

        if (current == sum)
        {
            res.push_back(i + 1);
            res.push_back(i + 1);
            flag = true;
            break;
        }
        else
        {
            for (int j = i + 1; j < arr.size(); j++)
            {
                current += arr[j];

                if (current == sum)
                {
                    res.push_back(i + 1);
                    res.push_back(j + 1);
                    flag = true;
                    break;
                }
            }
            if (flag)
                break;
        }
    }
    if (flag)
    {
        return res;
    }
    return {-1};
}

int main()
{
    int sum = 12;
    // int sum = 23;

    vector<int> arr = {1, 2, 3, 7, 5};
    // vector<int> arr = {15, 2, 4, 8, 9, 5, 10, 23};

    vector<int> result = subarraySum(arr, sum);

    for (auto i : result)
    {
        cout << i << " ";
    }
    cout << endl;
}