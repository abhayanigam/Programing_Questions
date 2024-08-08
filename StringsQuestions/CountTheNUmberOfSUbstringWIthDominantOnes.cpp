/**
 * Count the Number of Substrings With Dominant Ones

    You are given a binary string s.
    Return the number of substrings with dominant ones.
    A string has dominant ones if the number of ones in the string is
    greater than or equal to the square of the number of zeros in the string.

    Example 1:
        Input: s = "00011"
    Output: 5
        Explanation:

        The substrings with dominant ones are shown in the table below.

        i	j	s[i..j]	Number of Zeros	Number of Ones
        3	3	1	0	1
        4	4	1	0	1
        2	3	01	1	1
        3	4	11	0	2
        2	4	011	1	2

    Example 2:
        Input: s = "101101"
    Output: 16
        Explanation:
        The substrings with non-dominant ones are shown in the table below.
        Since there are 21 substrings total and 5 of them have non-dominant ones,
        it follows that there are 16 substrings with dominant ones.

        i	j	s[i..j]	Number of Zeros	Number of Ones
        1	1	0	      1	               0
        4	4	0	      1	               0
        1	4	0110	  2	               2
        0	4	10110	  2	               3
        1	5	01101	  2	               3
 */

#include <iostream>
#include <string>
using namespace std;

int countDominantOnes(string &s)
{
    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int Ones = 0, zeros = 0;

        for (int j = i; j < s.size(); j++)
        {
            if (s[j] == '1')
            {
                Ones++;
            }
            else
            {
                zeros++;
            }

            // Check is the substring has dominant ones;
            if (Ones >= zeros * zeros)
            {
                count++;
            }
        }
    }

    return count;
}

int main()
{
    string s1 = "00011";
    string s2 = "101101";

    cout << "Input : " << s1 << endl;
    cout << "Output : " << countDominantOnes(s1) << endl;

    cout << "Input : " << s2 << endl;
    cout << "OUtput : " << countDominantOnes(s2) << endl;
}