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

int closestElement(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());

    int closest = nums[0];

    int mindifference = abs(target - closest);

    for (auto num : nums)
    {
        int difference = abs(target - num);
        if (difference < mindifference)
        {
            mindifference = difference;
            closest = num;
        }
    }

    return closest;
}
int threeSumClosest(vector<int> &nums, int target)
{
    vector<int> arr;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                arr.push_back((nums[i] + nums[j] + nums[k]));
            }
        }
    }

    return closestElement(arr, target);
}

int main()
{
    vi arr = {-1, 2, 1, -4};
    int target = 1;

    cout << threeSumClosest(arr, target) << endl;
    return 0;
}