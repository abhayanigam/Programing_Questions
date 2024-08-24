/**
 * Minimum Platforms
    Given arrival and departure times of all trains that reach a railway station.
    Find the minimum number of platforms required for the railway station so that no train is kept waiting.
    Consider that all the trains arrive on the same day and leave on the same day.
    Arrival and departure time can never be the same for a train but we can have arrival
    time of one train equal to departure time of the other. At any given instance of time,
    same platform can not be used for both departure of a train and arrival of another train. In such cases, we need different platforms.

    Examples:

    Input: n = 6, arr[] = {0900, 0940, 0950, 1100, 1500, 1800},
                dep[] = {0910, 1200, 1120, 1130, 1900, 2000}
    Output: 3
    Explanation: There are three trains during the time 0940 to 1200. So we need minimum 3 platforms.
    Input: n = 3, arr[] = {0900, 1235, 1100},
                dep[] = {1000, 1240, 1200}
    Output: 1
    Explanation: All train times are mutually exlusive. So we need only one platform
    Input: n = 3, arr[] = {1000, 0935, 1100},
                dep[] = {1200, 1240, 1130}
    Output: 3
    Explanation: All 3 trains have to be their from 11:00 to 11:30
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int findPlatform(vector<int> arr, vector<int> dep)
// {
//     sort(arr.begin(), arr.end());
//     sort(dep.begin(), dep.end());

//     int plat_needed = 1, result = 1;
//     int i = 1, j = 0;

//     while (i < arr.size() && j < arr.size())
//     {
//         if (arr[i] <= dep[j])
//         {
//             plat_needed++;
//             i++;
//         }

//         else if (arr[i] > dep[j])
//         {
//             plat_needed--;
//             j++;
//         }

//         if (plat_needed > result)
//             result = plat_needed;
//     }

//     return result;
// }

int findPlatform(int arr[], int dep[], int n)
{
    // Sort arrival and departure arrays
    sort(arr, arr + n);
    sort(dep, dep + n);

    // plat_needed indicates number of platforms
    // needed at a time
    int plat_needed = 1, result = 1;
    int i = 1, j = 0;

    // Similar to merge in merge sort to process
    // all events in sorted order
    while (i < n && j < n)
    {
        // If next event in sorted order is arrival,
        // increment count of platforms needed
        if (arr[i] <= dep[j])
        {
            plat_needed++;
            i++;
        }

        // Else decrement count of platforms needed
        else if (arr[i] > dep[j])
        {
            plat_needed--;
            j++;
        }

        // Update result if needed
        if (plat_needed > result)
            result = plat_needed;
    }

    return result;
}

int main()
{
    // vector<int> arr = {100, 300, 500};
    // vector<int> dep = {900, 400, 600};

    int arr[] = {100, 300, 500};
    int dep[] = {900, 400, 600};

    int n = sizeof(arr) / sizeof(arr[0]);

    // cout << findPlatform(arr, dep);
    cout << findPlatform(arr, dep, n);
}