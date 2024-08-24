/*
Given a number N. Find the minimum number of operations required to reach N starting from 0. You have 2 operations available:

Double the number
Add one to the number
Example 1:

Input:
N = 8
Output: 4
Explanation:
0 + 1 = 1 --> 1 + 1 = 2 --> 2 * 2 = 4 --> 4 * 2 = 8.
Example 2:

Input:
N = 7
Output: 5
Explanation:
0 + 1 = 1 --> 1 + 1 = 2 --> 1 + 2 = 3 --> 3 * 2 = 6 --> 6 + 1 = 7.
Your Task:
You don't need to read input or print anything. Your task is to complete the function minOperation() which accepts an integer N and return number of minimum operations required to reach N from 0.

Expected Time Complexity: O(LogN)
Expected Auxiliary Space: O(1)
*/

#include <iostream>
#include <vector>
using namespace std;

int minOperation(int N)
{
    // int operations = 0;

    // while (N > 0)
    // {
    //     if (N % 2 == 0)
    //     {
    //         N /= 2;
    //     }
    //     else
    //     {
    //         N -= 1;
    //     }
    //     operations++;
    // }

    // return operations;

    if (N == 1)
    {
        return 1;
    } // code here.

    int m = N / 2;
    if (N % 2 == 0)
    {
        return 1 + minOperation(m);
    }
    return 2 + minOperation(m);
}

int main()
{
    int N;

    N = 8;
    cout << "Minimum operations to reach " << N << " from 0: " << minOperation(N) << endl; // Output: 4

    N = 7;
    cout << "Minimum operations to reach " << N << " from 0: " << minOperation(N) << endl; // Output: 5

    return 0;
}