/*
    https://www.geeksforgeeks.org/longest-palindromic-substring-using-dynamic-programming-2/

    Given a string, find the longest substring which is a palindrome.

    Examples:

    Input: Given string :"forgeeksskeegfor",
    Output: "geeksskeeg".
    Input: Given string :"Geeks",
    Output: "ee".
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

string longestPalindrome(string s)
{
    int count = -1;
    string ans = "";

    int n = s.length();

    bool dp[n][n];

    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; i < n; i++, j++)
        {
            if (g == 0)
            {
                dp[i][j] = true;
            }
            else if (g == 1)
            {
                dp[i][j] = (s[i] == s[j]);
            }
            else
            {
                dp[i][j] = (s[i] == s[j] && dp[i + 1][j - 1]);
            }
            if (dp[i][j] && count < j - i + 1)
            {
                ans = s.substr(i, j - i + 1);
                count = ans.length();
            }
        }
    }
    return ans;
}

int main()
{
    string str = "forgeeksskeegfor";

    cout << longestPalindrome(str) << endl;
}