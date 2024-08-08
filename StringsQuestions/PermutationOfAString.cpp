/**
 * Permutations of a given string
    Given a string S. The task is to print all unique permutations of the given string that
    may contain dulplicates in lexicographically sorted order.

    Example 1:
        Input: ABC
        Output:
        ABC ACB BAC BCA CAB CBA

    Explanation:
        Given string ABC has permutations in 6
        forms as ABC, ACB, BAC, BCA, CAB and CBA .

    Example 2:
        Input: ABSG
        Output:
        ABGS ABSG AGBS AGSB ASBG ASGB BAGS
        BASG BGAS BGSA BSAG BSGA GABS GASB
        GBAS GBSA GSAB GSBA SABG SAGB SBAG
        SBGA SGAB SGBA
    Explanation:
        Given string ABSG has 24 permutations.
 */

// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
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

void permute(string &str, int left, int right)
{
    if (left == right)
    {
        cout << str << endl;
    }
    else
    {
        for (int i = left; i <= right; i++)
        {
            swap(str[left], str[i]);

            permute(str, left + 1, right);

            swap(str[left], str[i]);
        }
    }
}

int main()
{
    string str = "ABC";
    permute(str, 0, str.size() - 1);

    return 0;
}
