#include <iostream>
#include <vector>
using namespace std;

int kadanesAlgo(vector<int> &arr)
{
    int max_so_far = 0, max_so_end = 0;

    for (auto i = 0; i < arr.size(); i++)
    {
        max_so_end = max_so_end + arr[i];

        if (max_so_end > max_so_far)
        {
            max_so_far = max_so_end;
        }
        if (max_so_end < 0)
        {
            max_so_end = 0;
        }
    }

    return max_so_far;
}

int maxSubArray(vector<int> &nums)
{
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};

    cout << "Maximum contiguous sum is : " << kadanesAlgo(arr);
    cout << "\nMaximum contiguous sum is : " << maxSubArray(arr);
}