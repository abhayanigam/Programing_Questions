/**
 * Generate Binary Strings Without Adjacent Zeros
    You are given a positive integer n.

    A binary string x is valid if all substrings
    of x of length 2 contain at least one "1".

    Return all valid strings with length n, in any order.
    Example 1:
        Input: n = 3
        Output: ["010","011","101","110","111"]

    Explanation:
    The valid strings of length 3 are: "010", "011", "101", "110", and "111".

    Example 2:
        Input: n = 1
        Output: ["0","1"]

    Explanation:
        The valid strings of length 1 are: "0" and "1".
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void generateBinaryString(int n, string current, vector<string> &result)
{
    if (current.length() == n)
    {
        result.push_back(current);
        return;
    }

    // Append '0' to the current string only if the last character is not '0'
    if (current.empty() || current.back() != '0')
    {
        generateBinaryString(n, current + '0', result);
    }

    // Append '1' to the current string and recurse
    generateBinaryString(n, current + '1', result);
}

vector<string> validStrings(int n)
{
    vector<string> result;
    generateBinaryString(n, "", result);
    return result;
}

int main()
{
    int n1 = 3;
    int n2 = 1;

    vector<string> result1 = validStrings(n1);
    vector<string> result2 = validStrings(n2);

    cout << "Example 1:" << endl;
    cout << "Input: " << n1 << endl;
    cout << "Output: ";
    for (const string &str : result1)
    {
        cout << "\"" << str << "\", ";
    }
    cout << endl;

    cout << "Example 2:" << endl;
    cout << "Input: " << n2 << endl;
    cout << "Output: ";
    for (const string &str : result2)
    {
        cout << "\"" << str << "\", ";
    }
    cout << endl;

    return 0;
}