#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    // vector<int> result;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     if (nums[i] != val)
    //     {
    //         result.push_back(nums[i]);
    //     }
    // }

    // cout << endl;

    // for (int i = 0; i < result.size(); i++)
    // {
    //     cout << result[i] << endl;
    // }

    // return result.size();

    int i = 0;

    for (const int num : nums)
        if (num != val)
            nums[i++] = num;

    return i;
}

int main()
{
    vector<int> arr = {3, 2, 2, 3};
    int target = 3;

    cout << "After Remove Elements are : " << removeElement(arr, target) << endl;

    vector<int> arr1 = {0, 1, 2, 2, 3, 0, 4, 2};
    int target1 = 2;

    cout << "After Remove Elements are : " << removeElement(arr1, target1) << endl;
}