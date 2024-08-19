#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void makePair(vector<int> &nums)
{
    vector<pair<int, int>> pairs;

    for (int i = 0; i < nums.size() - 1; i += 2)
    {
        pairs.push_back({nums[i], nums[i + 1]});
    }

    // Check if there's an unpaired element left
    if (nums.size() % 2 != 0)
    {
        // Add the last single element
        pairs.push_back({nums.back(), 0}); // -1 indicates that it's a single element
    }
    cout << "Output Pairs are : " << endl;
    for (int i = 0; i < pairs.size(); i++)
    {
        cout << "{" << pairs[i].first << "," << pairs[i].second << "} ";
    }
    cout << endl;

    sort(pairs.begin(), pairs.end());

    cout << "After Sort Pairs Are : " << endl;
    for (int i = 0; i < pairs.size(); i++)
    {
        cout << "{" << pairs[i].first << "," << pairs[i].second << "} ";
    }
    cout << endl;
}

int main()
{
    // vector<int> nums = {5, 24, 39, 60, 15, 28, 27, 40, 50, 90};
    vector<int> nums = {
        5,
        24,
        39,
        60,
        15,
    };

    makePair(nums);
}