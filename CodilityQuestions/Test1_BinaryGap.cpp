/**
 * Task 1 -- BinaryGap

    Task description:
    A binary gap within a positive integer N is any maximal sequence of consecutive zeros that is
    surrounded by ones at both ends in the binary representation of N.

    For example, number 9 has binary representation 1001 and contains a binary gap of length 2.
    The number 529 has binary representation 1000010001 and contains two binary gaps:
    one of length 4 and one of length 3. The number 20 has binary representation 10100 and contains
    one binary gap of length 1. The number 15 has binary representation 1111 and has no binary gaps.
    The number 32 has binary representation 100000 and has no binary gaps.

    Write a function:
        int solution(int N);

    that, given a positive integer N, returns the length of its longest binary gap.
    The function should return 0 if N doesn't contain a binary gap.

    For example, given N = 1041 the function should return 5,
    because N has binary representation 10000010001 and so its longest binary gap is of length 5.
    Given N = 32 the function should return 0, because N has binary representation '100000' and thus
    no binary gaps.

    Write an efficient algorithm for the following assumptions:
        > N is an integer within the range [1..2,147,483,647].
*/

// Method 1:
//  int solution(int N)
//  {
//      int max_gap = 0, current_gap = 0;
//      bool in_gap = false;

//     while (N > 0)
//     {
//         if (N & 1)
//         { // Check if the least significant bit is 1
//             if (in_gap)
//             {
//                 max_gap = std::max(max_gap, current_gap);
//                 current_gap = 0;
//             }
//             in_gap = true;
//         }
//         else
//         {
//             if (in_gap)
//             {
//                 current_gap++;
//             }
//         }
//         N >>= 1; // Shift N right by 1 bit
//     }

//     return max_gap;
// }

// Method 2:
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

void printLineByLine(int num)
{
    int i = 0, arr[100], count0 = 0, count1 = 0;

    while (num)
    {
        arr[i] = num % 10;
        i++;
        num /= 10;
    }

    for (int j = i - 1; j > -1; j--)
    {
        if (count1 != 2)
        {
            if (arr[j] == 0)
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }
    }
    // cout << "Count 0 : " << count0 << endl;
    // cout << "Count 1 : " << count1 << endl;

    (count1 == 2) ? cout << "Gap with : " << count0 << endl : cout << "No gap for 0" << endl;
    ;
}

int main()
{
    int num = 1000010001;
    printLineByLine(num);

    int num2 = 100000;
    printLineByLine(num2);

    int num3 = 1111;
    printLineByLine(num3);
    return 0;
}
