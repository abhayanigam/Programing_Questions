/**
 * Element with left side smaller and right side greater
    Given an unsorted array of arr. Find the first element in an array such that all
    of its left elements are smaller and all right elements of its are greater than it.

    Note: Return -1 if there is no such element.

    Examples :
        Input: arr = [4, 2, 5, 7]
        Output: 5
        Explanation: Elements on left of 5 are smaller than 5 and on right of it are greater than 5.

        Input: arr = [11, 9, 12]
        Output: -1
        Explanation: As no element here which we can say smaller in left & greater in right.

    Expected Time Complexity: O(n)
    Expected Auxiliary Space: O(n)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void LeftAndRightSideGreater(vector<int> &arr)
{
    int mid = arr.size() / 2;

    bool flagleft = false;
    bool flagright = false;

    for (int i = 0; i < mid; i++)
    {
        if (arr[mid] > arr[i])
        {
            flagleft = true;
        }
    }
    for (int j = mid + 1; j < arr.size(); j++)
    {
        if (arr[mid] < arr[j])
        {
            flagright = true;
        }
    }

    if (flagleft == true && flagright == true)
    {
        cout << arr[mid] << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}

int main()
{
    // vector<int> arr = {4, 2, 5, 7};
    vector<int> arr = {11, 9, 12};

    LeftAndRightSideGreater(arr);
}