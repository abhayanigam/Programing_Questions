/**
 * Recursively remove all adjacent duplicates
 * Given a string s, remove all its adjacent duplicate characters recursively.
    Note: For some test cases, the resultant string would be an empty string.
    In that case, the function should return the empty string only.

    Example 1:

    Input:
    S = "geeksforgeek"
    Output: "gksforgk"
    Explanation:
    g(ee)ksforg(ee)k -> gksforgk

    Example 2:

    Input:
    S = "abccbccba"
    Output: ""
    Explanation:
    ab(cc)b(cc)ba->abbba->a(bbb)a->aa->(aa)->""(empty string)
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

string removeAdjacentDuplicates(string str)
{
    string result;
    stack<char> st;

    for (char a : str)
    {
        if (!st.empty() && st.top() == a)
        {
            st.pop();
        }
        else
        {
            st.push(a);
        }
    }

    while (!st.empty())
    {
        result = st.top() + result;
        st.pop();
    }

    return result;
}

string recursivelyRemoveAdjacentDuplicates(string s)
{
    string newString = removeAdjacentDuplicates(s);

    // If the result is different from the input, apply the function recursively
    if (newString != s)
    {
        return recursivelyRemoveAdjacentDuplicates(newString);
    }

    return newString;
}

int main()
{
    // Example 1
    string s1 = "geeksforgeek";
    cout << "Processed string 1: " << recursivelyRemoveAdjacentDuplicates(s1) << endl;

    // Example 2
    string s2 = "abccbccba";
    cout << "Processed string 2: " << recursivelyRemoveAdjacentDuplicates(s2) << endl;

    return 0;
}