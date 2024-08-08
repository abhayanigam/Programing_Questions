/**
 * Number of Senior Citizens
    You are given a 0-indexed array of strings details.
    Each element of details provides information about
    a given passenger compressed into a string of length 15. The system is such that:

    The first ten characters consist of the phone number of passengers.
    The next character denotes the gender of the person.
    The following two characters are used to indicate the age of the person.
    The last two characters determine the seat allotted to that person.
    Return the number of passengers who are strictly more than 60 years old.



    Example 1:
        Input: details = ["7868190130M7522","5303914400F9211","9273338290F4010"]
        Output: 2
        Explanation: The passengers at indices 0, 1, and 2 have ages 75, 92, and 40.
        Thus, there are 2 people who are over 60 years old.
    Example 2:
        Input: details = ["1313579440F2036","2921522980M5644"]
        Output: 0
        Explanation: None of the passengers are older than 60.
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

// int countSeniors(vector<string> &details)
// {
//     vector<int> result;
//     int count = 0;

//     for (int i = 0; i < details.size(); ++i)
//     { // Traverse each string in the vector
//         string detail = details[i];
//         string number;
//         for (int j = 11; j < detail.size() - 2; ++j)
//         { // Traverse each character from index 11 to the second last character
//             char c = detail[j];
//             number += c; // Combine the characters into a string
//         }
//         if (!number.empty())
//         {
//             result.push_back(stoi(number)); // Convert the string to an integer and add it to the result vector
//         }
//     }

//     for (int j = 0; j < result.size(); j++)
//     {
//         if (result[j] >= 60)
//         {
//             count++;
//         }
//     }

//     return count;
// }

int countSeniors(vector<string> &details)
{
    int seniorCount = 0;

    for (auto detail : details)
    {
        int age = stoi(detail.substr(11, 2));

        seniorCount += (age > 60) ? 1 : 0;
    }

    return seniorCount;
}

int main()
{
    vector<string> details = {"7868190130M7522", "5303914400F9211", "9273338290F4010"};
    cout << countSeniors(details);
    return 0;
}