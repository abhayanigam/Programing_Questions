/*
    Consider a row of N coins of values V1 . . . Vn, where N is even. We play a game against an opponent by alternating turns. In each turn, a player selects either the first or last coin from the row, removes it from the row permanently, and receives the value of the coin. Determine the maximum possible amount of money we can definitely win if we move first.

    Note: The opponent is as clever as the user.

    Examples:

    Input: {5, 3, 7, 10}
    Output: 15 -> (10 + 5)

    Input: {8, 15, 3, 7}
    Output: 22 -> (7 + 15)
*/

#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

vector<int> arr;
map<vector<int>, int> memo;
int n = arr.size();

int solve(int i, int j)
{
    if ((i > j) || (i >= n) || (j < 0))
    {
        return 0;
    }

    vector<int> k{i, j};
    if (memo[k] != 0)
    {
        return memo[k];
    }

    // if the user chooses ith coin, the opponent can choose
    // from i+1th or jth coin. if he chooses i+1th coin,
    // user is left with [i+2,j] range. if opp chooses jth
    // coin, then user is left with [i+1,j-1] range to
    // choose from. Also opponent tries to choose in such a
    // way that the user has minimum value left.
    int option1 = arr[i] + min(solve(i + 2, j), solve(i + 1, j - 1));

    // if user chooses jth coin, opponent can choose ith
    // coin or j-1th coin. if opp chooses ith coin,user can
    // choose in range [i+1,j-1]. if opp chooses j-1th coin,
    // user can choose in range [i,j-2].
    int option2 = arr[j] + min(solve(i + 1, j - 1), solve(i, j - 2));

    memo[k] = max(option1, option2);

    return memo[k];
}

int optimalStrategyOfGame()
{
    memo.clear();
    return solve(0, n - 1);
}

int main()
{
    arr.push_back(8);
    arr.push_back(15);
    arr.push_back(3);
    arr.push_back(7);
    n = arr.size();
    cout << optimalStrategyOfGame() << endl;

    arr.clear();
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    n = arr.size();
    cout << optimalStrategyOfGame() << endl;

    arr.clear();
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(10);
    n = arr.size();
    cout << optimalStrategyOfGame() << endl;
}