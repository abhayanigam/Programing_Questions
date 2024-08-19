/*
Sample Input 1:
1
3 5
1 2 2 3 1
Sample Output 1:
4
Explanation of sample input 1:
The ayush will read the chapter as follows,
Day 1 : 1 , 2         Time required : 3
Day 2 : 3             Time required : 2
Day 3 : 4 , 5         Time required : 4
So the maximum time in a day is 4.
Sample Input 2:
1
4 7
2 2 3 3 4 4 1
Sample Output 2:
6
Explanation of sample input 2:
The ayush will read the chapter as follows,
Day 1 : 1 , 2          Time required : 4
Day 2 : 3 , 4          Time required : 6
Day 3 : 5              Time required : 4
Day 4 : 6 , 7          Time required : 5
So the maximum time in a day is 6.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

bool canDistributeChapters(int n, const vector<int> &time, int maxTime)
{
    int daysNeeded = 1;
    int currentDayTime = 0;

    for (int t : time)
    {
        if (currentDayTime + t <= maxTime)
        {
            currentDayTime += t;
        }
        else
        {
            daysNeeded++;
            currentDayTime = t;
            if (daysNeeded > n)
            {
                return false;
            }
        }
    }
    return true;
}

void ayushGivesNinjatest(int n, int m, vector<int> time)
{
    int maxtimeleft = *max_element(time.begin(), time.end());
    int totaltimeleft = accumulate(time.begin(), time.end(), 0);

    cout << "MaxTimeLeft : " << maxtimeleft << endl;
    cout << "TotalTimeLeft : " << totaltimeleft << endl;

    while (maxtimeleft < totaltimeleft)
    {
        int mid = maxtimeleft + (totaltimeleft - maxtimeleft) / 2;

        if (canDistributeChapters(n, time, mid))
        {
            totaltimeleft = mid;
        }
        else
        {
            maxtimeleft = mid + 1;
        }
    }

    cout << "Max Time : " << maxtimeleft << endl;
}

int main()
{

    ayushGivesNinjatest(3, 5, vector<int>{1, 2, 2, 3, 1});
    ayushGivesNinjatest(4, 7, vector<int>{2, 2, 3, 3, 4, 4, 1});
}