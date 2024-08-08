/**
 * Lexicographically Minimum String After Removing Stars
    You are given a string s. It may contain any number of '*' characters.
    Your task is to remove all '*' characters.

    While there is a '*', do the following operation:

    > Delete the leftmost '*' and the smallest non-'*' character to its left.
    If there are several smallest characters, you can delete any of them.

    Return the lexicographically smallest resulting string after removing all '*' characters.

    Example 1:
        Input: s = "aaba*"
        Output: "aab"

    Explanation:
        We should delete one of the 'a' characters with '*'. If we choose s[3], s becomes the lexicographically smallest.

    Example 2:
        Input: s = "abc"
        Output: "abc"

    Explanation:
        There is no '*' in the string.
 */

#include <iostream>
#include <string>
#include <stack>
#include <vector>

using namespace std;

// Working Method class
class Solution
{
public:
    string clearStars(string s)
    {
        stack<int> g[26];
        int n = s.length();
        vector<bool> rem(n);
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '*')
            {
                rem[i] = true;
                for (int j = 0; j < 26; ++j)
                {
                    if (!g[j].empty())
                    {
                        rem[g[j].top()] = true;
                        g[j].pop();
                        break;
                    }
                }
            }
            else
            {
                g[s[i] - 'a'].push(i);
            }
        }
        string ans;
        for (int i = 0; i < n; ++i)
        {
            if (!rem[i])
            {
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};

string removeStars(const string &s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '*')
        {
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            st.push(c);
        }
    }

    // Construct the resulting string from the stack
    string result;
    while (!st.empty())
    {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

int main()
{
    string s1 = "aaba*";
    string s2 = "abc";
    string s3 = "de*";

    // cout << "Example 1:" << endl;
    // cout << "Input: " << s1 << endl;
    // cout << "Output: " << removeStars(s1) << endl; // Expected output: "aab"

    // cout << "Example 2:" << endl;
    // cout << "Input: " << s2 << endl;
    // cout << "Output: " << removeStars(s2) << endl; // Expected output: "abc"

    cout << "Example 3:" << endl;
    cout << "Input: " << s3 << endl;
    cout << "Output: " << removeStars(s3) << endl; // Expected output: "e"

    return 0;
}
