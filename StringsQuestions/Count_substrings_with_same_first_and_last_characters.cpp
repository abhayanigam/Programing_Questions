/*
    Input  : S = "abcab"
    Output : 7
        There are 15 substrings of "abcab"
        a, ab, abc, abca, abcab, b, bc, bca
        bcab, c, ca, cab, a, ab, b
        Out of the above substrings, there
        are 7 substrings : a, abca, b, bcab,
        c, a and b.
*/

#include <iostream>
using namespace std;

int countSubstring(string str, int start, int end, int size)
{
    if (size == 1)
        return 1;
    if (size <= 0)
        return 0;

    int res = countSubstring(str, start + 1, end, size - 1) + countSubstring(str, start, end - 1, size - 1) - countSubstring(str, start + 1, end - 1, size - 2);

    if (str[start] == str[end])
        res++;

    return res;
}

int main()
{
    string str = "abcab";

    int n = str.length();
    cout << countSubstring(str, 0, n - 1, n) << endl;
}