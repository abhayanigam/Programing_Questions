/**
 * Array Leaders
    Difficulty: EasyAccuracy: 29.94%Submissions: 686K+Points: 2
    Given an array arr of n positive integers, your task is to find all the leaders in the array.
    An element of the array is considered a leader if it is greater than all the elements on its
    right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

    Examples
        Input: n = 6, arr[] = {16,17,4,3,5,2}
        Output: 17 5 2
    Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
        Input: n = 5, arr[] = {10,4,2,4,1}
        Output: 10 4 4 1
    Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side
        Input: n = 4, arr[] = {5, 10, 20, 40}
        Output: 40
    Explanation: When an array is sorted in increasing order, only the rightmost element is leader.
        Input: n = 4, arr[] = {30, 10, 10, 5}
        Output: 30 10 10 5
    Explanation: When an array is sorted in non-increasing order, all elements are leaders.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isVectorNonIncreasingSorted(const vector<int> &vec)
{
    return is_sorted(vec.begin(), vec.end(), greater<int>());
}

bool isVectorSortedGivenIndex(const vector<int> &vec, int index)
{
    if (index > vec.size())
    {
        return false;
    }
    return std::is_sorted(vec.begin(), vec.begin() + index, greater<int>());
}

vector<int> ArrayLeaders(vector<int> arr)
{
    vector<int> res;

    int mid = arr.size() / 2, leftMaxElement = arr[0], rightMaxElement = arr[arr.size() - 1];

    cout << "Mid : " << arr[mid] << endl;

    if (isVectorNonIncreasingSorted(arr))
    {
        for (int i = 0; i < arr.size(); i++)
        {
            res.push_back(arr[i]);
        }
    }
    else
    {
        if (isVectorSortedGivenIndex(arr, mid))
        {
            for (int i = 0; i < arr.size(); i++)
            {
                res.push_back(arr[i]);
            }
        }
        else
        {
            for (int i = 1; i < mid; ++i)
            {
                if (arr[i] > leftMaxElement)
                {
                    leftMaxElement = arr[i];
                }
            }
            res.push_back(leftMaxElement);

            for (int i = mid + 1; i < arr.size(); i++)
            {
                if (arr[i] > rightMaxElement)
                {
                    res.push_back(arr[i]);
                }
                else
                {
                    res.push_back(arr[i]);
                }
            }
        }
    }

    return res;
}

int main()
{
    // vector<int> arr = {16, 17, 4, 3, 5, 2};
    // vector<int> arr = {10, 4, 2, 4, 1};
    vector<int> arr = {30, 10, 10, 5};

    vector<int> res = ArrayLeaders(arr);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }

    cout << endl;
}