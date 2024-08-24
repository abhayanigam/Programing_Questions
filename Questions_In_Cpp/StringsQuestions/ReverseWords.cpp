/**
 * Reverse Words
    Given a String S, reverse the string without reversing its individual words.
    Words are separated by dots.

    Example 1:
        Input:
        S = i.like.this.program.very.much

        Output: much.very.program.this.like.i

        Explanation: After reversing the whole
        string(not individual words), the input
        string becomes
        much.very.program.this.like.i

    Example 2:
        Input:
        S = pqr.mno

        Output: mno.pqr

        Explanation: After reversing the whole
        string , the input string becomes
        mno.pqr
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string s = "i love programming very much !";

    vector<string> words;
    string word;

    // Use istringstream to split the string by spaces
    istringstream stream(s);

    // Read each word from the stream and store it in the vector
    while (stream >> word)
    {
        words.push_back(word);
    }

    for (auto &str : words)
    {
        cout << str << " ";
    }
    cout << endl;

    // Reverse the first 6 words and concatenate them into a string
    string ans;
    for (int i = words.size() - 1; i >= 0; i--)
    {
        ans += words[i] + " ";
    }

    cout << ans << endl;

    return 0;
}
