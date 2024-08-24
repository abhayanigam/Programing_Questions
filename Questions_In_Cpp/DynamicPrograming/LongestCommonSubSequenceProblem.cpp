/*
 * ITL, 15.4 Longest common subsequence
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<string>> cache;

string topDownMemorized(string &x, int iXBegin, string &y, int iYBegin)
{
    cout << "Call \t" << iYBegin << "," << iXBegin << "]" << endl;

    if (iXBegin >= x.length() || iYBegin >= y.length())
    {
        return "";
    }

    if (!cache[iYBegin][iXBegin].empty())
    {
        return cache[iYBegin][iXBegin];
    }

    string subSeq;
    if (x[iXBegin] == y[iYBegin])
    {
        subSeq = x[iXBegin] + topDownMemorized(x, iXBegin + 1, y, iYBegin + 1);
        cache[iYBegin][iXBegin] = subSeq;
        return subSeq;
    }

    string a = topDownMemorized(x, iXBegin + 1, y, iYBegin);
    string b = topDownMemorized(x, iXBegin, y, iYBegin + 1);
    subSeq = (a.length() > b.length()) ? a : b;

    cache[iYBegin][iXBegin] = subSeq;
    return subSeq;
}

int main()
{
    string x = "10010101";
    string y = "010110110";

    cache.resize(y.length(), vector<string>(x.length(), ""));

    string lcs = topDownMemorized(x, 0, y, 0);

    if (lcs.empty())
    {
        cout << "No common subsequence" << endl;
    }
    else
    {
        cout << "Ans : " << lcs << endl;
    }
}