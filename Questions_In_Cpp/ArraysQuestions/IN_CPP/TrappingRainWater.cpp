/**
 * Trapping Rain Water
    Given an array arr[] of N non-negative integers representing the
    height of blocks. If width of each block is 1,
    compute how much water can be trapped between the blocks during
    the rainy season.


    Example 1:
    Input:
        N = 6
        arr[] = {3,0,0,2,0,4}
    Output:
        10
    Explanation:
                   []
        []         []
        []     []  []
        []__ __[]__[]

        Bars for input {3,0,0,2,0,4}
        Total trapped water = 3+3+1+3 = 10

    Example 2:
    Input:
        N = 4
        arr[] = {7,4,0,9}
    Output:
        10
    Explanation:
        Water trapped by above
        block of height 4 is 3 units and above
        block of height 0 is 7 units. So, the
        total unit of water trapped is 10 units.

    Example 3:
    Input:
        N = 3
        arr[] = {6,9,9}
    Output:
        0
    Explanation:
        No water will be trapped.
 */

#include <iostream>
#include <vector>
using namespace std;

int TrappingRainWater(vector<int> arr)
{
    vector<int> res;

    int sum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            res.push_back(arr[0]);
        }
        else if (arr[i] < arr[0])
        {
            res.push_back(arr[0] - arr[i]);
        }
    }

    for (int i = 0; i < res.size(); i++)
    {
        sum += res[i];
    }
    return sum;
}

int main()
{
    vector<int> bars = {3, 0, 0, 2, 0, 4};
    vector<int> bars1 = {7, 4, 0, 9};
    vector<int> bars2 = {6, 9, 9};

    cout << TrappingRainWater(bars) << endl;
    cout << TrappingRainWater(bars1) << endl;
    cout << TrappingRainWater(bars2) << endl;
}