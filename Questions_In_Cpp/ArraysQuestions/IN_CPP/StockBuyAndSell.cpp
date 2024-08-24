/**
 * Stock buy and sell
    The cost of stock on each day is given in an array A[] of size N.
    Find all the segments of days on which you buy and sell the stock such that
    the sum of difference between sell and buy prices is maximized. Each segment
    consists of indexes of two elements, first is index of day on which you
    buy stock and second is index of day on which you sell stock.
    Note: Since there can be multiple solutions,
    the driver code will print 1 if your answer is correct,
    otherwise, it will return 0. In case there's no profit the driver code will
    print the string "No Profit" for a correct solution.

    Example 1:

    Input:
    N = 7
    A[] = {100,180,260,310,40,535,695}
    Output:
    1
    Explanation:
    One possible solution is (0 3) (4 6)
    We can buy stock on day 0,
    and sell it on 3rd day, which will
    give us maximum profit. Now, we buy
    stock on day 4 and sell it on day 6.
    Example 2:

    Input:
    N = 5
    A[] = {4,2,2,2,4}
    Output:
    1
    Explanation:
    There are multiple possible solutions.
    one of them is (3 4)
    We can buy stock on day 3,
    and sell it on 4th day, which will
    give us maximum profit.

    Your Task:
    The task is to complete the function stockBuySell() which takes an array of A[]
    and N as input parameters and finds the days of buying and selling stock.
    The function must return a 2D list of integers containing all the buy-sell
    pairs i.e. the first value of the pair will represent the day on which you
    buy the stock and the second value represent the day on which you sell that stock.
    If there is No Profit, return an empty list.
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> &prices)
{
    vector<int> currDay(2), nextDay(2);

    nextDay[0] = nextDay[1] = 0;

    for (int i = prices.size() - 1; i >= 0; i--)
    {
        // can buy
        currDay[0] = max(nextDay[0], -prices[i] + nextDay[1]);

        // can sell
        currDay[1] = max(nextDay[1], prices[i] + nextDay[0]);

        nextDay = currDay;
    }
    return nextDay[0];
}

int main()
{
    vector<int> prices = {100, 180, 260, 310, 40, 535, 695};
    cout << maxProfit(prices) << endl;
    ;
}