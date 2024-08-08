/**
 * Largest Number formed from an Array\
    Given an array of strings arr[] of length n representing non-negative integers,
    arrange them in a manner, such that, after concatenating them in order, it results in the largest possible number.
    Since the result may be very large, return it as a string.

    Examples:
        Input: n = 5, arr[] =  {"3", "30", "34", "5", "9"}
        Output: "9534330"

        Explanation: Given numbers are  {"3", "30", "34", "5", "9"}, the arrangement "9534330" gives the largest value.

        Input: n = 4, arr[] =  {"54", "546", "548", "60"}
        Output: "6054854654"

        Explanation: Given numbers are {"54", "546", "548", "60"}, the arrangement "6054854654" gives the largest value.

        Expected Time Complexity: O(n*log(n) ).
        Expected Auxiliary Space: O(n).
 */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool myCompare(const string &X, const string &Y)
{
    return (X + Y) > (Y + X);
}

void LargestNumberFormed(vector<string> &arr)
{
    // reverse(arr.begin(), arr.end());

    // string oneString;

    // for (auto str : arr)
    // {
    //     oneString += str;
    // }
    // cout << oneString << endl;

    // Sort the array using the custom comparator

    sort(arr.begin(), arr.end(), myCompare);

    if (arr[0] == "0")
    {
        cout << "0" << endl;
    }

    string result;
    for (const string &num : arr)
    {
        result += num;
    }

    cout << "Result : " << result << endl;
}

int main()
{
    vector<string> arr = {"3", "30", "34", "5", "9"};
    LargestNumberFormed(arr);

    vector<string> arr1 = {"54", "546", "548", "60"};
    LargestNumberFormed(arr1);
}