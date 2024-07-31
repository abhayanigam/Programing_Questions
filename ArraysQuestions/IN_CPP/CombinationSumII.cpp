/**
 * Combination Sum II
    Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

    Each number in candidates may only be used once in the combination.

    Note: The solution set must not contain duplicate combinations.



    Example 1:

    Input: candidates = [10,1,2,7,6,1,5], target = 8
    Output:
    [
    [1,1,6],
    [1,2,5],
    [1,7],
    [2,6]
    ]
    Example 2:

    Input: candidates = [2,5,2,1,2], target = 5
    Output:
    [
    [1,2,2],
    [5]
    ]
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

class Solution
{
public:
    void findCombinations(vector<int> &candidates, int target, int index, vector<int> &combination, vector<vector<int>> &result)
    {
        if (target == 0)
        {
            result.push_back(combination);
            return;
        }

        for (int i = index; i < candidates.size(); i++)
        {
            if (i > index && candidates[i] == candidates[i - 1])
            {
                continue;
            }
            if (candidates[i] <= target)
            {
                combination.push_back(candidates[i]);
                findCombinations(candidates, target - candidates[i], i + 1, combination, result);
                combination.pop_back();
            }
        }
    }

    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());

        vector<vector<int>> result;
        vector<int> combination;

        findCombinations(candidates, target, 0, combination, result);

        return result;
    }
};