/**
 * Find the Index of the First Occurrence in a String
    Given two strings needle and haystack, return the index of the first occurrence
    of needle in haystack, or -1 if needle is not part of haystack.

    Example 1:
        Input: haystack = "sadbutsad", needle = "sad"
        Output: 0
        Explanation: "sad" occurs at index 0 and 6.
        The first occurrence is at index 0, so we return 0.

    Example 2:
        Input: haystack = "leetcode", needle = "leeto"
        Output: -1
        Explanation: "leeto" did not occur in "leetcode", so we return -1.
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

void printIndex(string haystack, string needle)
{
    bool flag = false;

    for (int i = 0; i < haystack.length(); i++)
    {
        if (haystack.substr(i, needle.length()) == needle)
        {
            cout << i << " ";
            flag = true;
        }
    }
    if (flag == false)
    {
        cout << "None" << endl;
    }
}

int main()
{
    string haystack = "sadbutsad", needle = "sad";

    printIndex(haystack, needle);

    return 0;
}