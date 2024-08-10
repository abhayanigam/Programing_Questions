/**
 * You are given a large integer represented as an integer array digits,
 * where each digits[i] is the ith digit of the integer.
 * The digits are ordered from most significant to least significant in left-to-right order.
 * The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

    Example 1:
        Input: digits = [1,2,3]
        Output: [1,2,4]
    Explanation: The array represents the integer 123.
        Incrementing by one gives 123 + 1 = 124.
        Thus, the result should be [1,2,4].

    Example 2:
        Input: digits = [4,3,2,1]
        Output: [4,3,2,2]
    Explanation: The array represents the integer 4321.
        Incrementing by one gives 4321 + 1 = 4322.
        Thus, the result should be [4,3,2,2].

    Example 3:
        Input: digits = [9]
        Output: [1,0]
    Explanation: The array represents the integer 9.
        Incrementing by one gives 9 + 1 = 10.
        Thus, the result should be [1,0].
 */

// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

#define vi vector<int>
#define vs vector<string>
#define st set<int>
#define vvi vector<vi>
#define vvs vector<vs>
#define ppi pair<int, int>
#define ppi pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

vector<int> splitInt(int element)
{
    vector<int> a;
    while (element)
    {
        a.push_back(element % 10);
        element /= 10;
    }
    return a;
}

vector<int> plusOne(vector<int> &digits)
{
    /*
    vector<int> result;

    if (digits.size() == 1)
    {
        int element = digits[0] + 1, i;
        vector<int> a = splitInt(element);

        for (int j = a.size() - 1; j >= 0; j--)
        {
            result.push_back(a[j]);
        }
    }
    else
    {
        for (int i = 0; i < digits.size() - 1; i++)
        {
            result.push_back(digits[i]);
        }

        result.push_back(digits[digits.size() - 1] + 1);
    }

    return result;
    */

    int sum = 0;
    digits[digits.size() - 1]++;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] == 10)
        {
            digits[i] = 0;
            if (i - 1 >= 0)
            {
                digits[i - 1]++;
            }
            else
            {
                digits.push_back(0);
                digits[i]++;
            }
        }
    }
    return digits;
}

int main()
{
    vector<int> digits = {1, 2, 3};
    vector<int> result = plusOne(digits);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> digits1 = {4, 3, 2, 1};
    vector<int> result1 = plusOne(digits1);
    for (int i : result1)
    {
        cout << i << " ";
    };
    cout << endl;

    vector<int> digits2 = {9};
    vector<int> result2 = plusOne(digits2);
    for (int i : result2)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> digits3 = {9, 9};
    vector<int> result3 = plusOne(digits3);
    for (int i : result3)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}