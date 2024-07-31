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

void nextPermutation(vector<int> &nums)
{
    int i = nums.size() - 2;

    while (i >= 0 && nums[i] >= nums[i + 1])
    {
        i--;
    }

    if (i < 0)
    {
        reverse(nums.begin(), nums.end());
        return;
    }

    int j = nums.size() - 1;

    while (j > i && nums[j] > nums[i])
    {
        j--;
    }

    swap(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
}

int main()
{

    return 0;
}