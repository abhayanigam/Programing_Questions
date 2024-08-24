/**
 * Given N items where each item has some weight and profit associated with it and also given a bag with capacity W, [i.e.,
 * the bag can hold at most W weight in it]. The task is to put the items into the bag such that the sum of profits associated
 * with them is the maximum possible.

Note: The constraint here is we can either put an item completely into the bag
or cannot put it at all [It is not possible to put a part of an item into the bag].

Examples:
    Input: N = 3, W = 4, profit[] = {1, 2, 3}, weight[] = {4, 5, 1}
    Output: 3
    Explanation: There are two items which have weight less than or equal to 4.
    If we select the item with weight 4, the possible profit is 1. And if we select the item with weight 1,
    the possible profit is 3. So the maximum possible profit is 3. Note that we cannot put both the items with
    weight 4 and 1 together as the capacity of the bag is 4.

    Input: N = 3, W = 3, profit[] = {1, 2, 3}, weight[] = {4, 5, 6}
    Output: 0
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int knapsackRec(int W, int *weight, int *profit, int index, int **dp)
{
    if (index < 0)
    {
        return 0;
    }
    if (dp[index][W] != -1)
    {
        return dp[index][W];
    }
    if (weight[index] > W)
    {
        dp[index][W] = knapsackRec(W, weight, profit, index - 1, dp);
        return dp[index][W];
    }
    else
    {
        dp[index][W] = max(profit[index] + knapsackRec(W - weight[index], weight, profit, index - 1, dp), knapsackRec(W, weight, profit, index - 1, dp));
        return dp[index][W];
    }
}

int knapsack(int W, int *weight, int *profit, int N)
{
    int **dp; // double pointer to declare the table dynamically
    dp = new int *[N];

    for (int i = 0; i < N; i++)
    {
        dp[i] = new int[W + 1];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < W + 1; j++)
        {
            dp[i][j] = -1;
        }
    }
    return knapsackRec(W, weight, profit, N - 1, dp);
}

int main()
{
    int profit[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int W = 50;
    int N = sizeof(profit) / sizeof(profit[0]);

    cout << knapsack(W, weight, profit, N) << endl;
}