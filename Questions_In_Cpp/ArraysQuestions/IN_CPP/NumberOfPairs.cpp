#include <iostream>
#include <vector>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        return a * ans * ans;
    }
}

int countPairs(vector<int> a, vector<int> b)
{
    int ans = 0;

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (power(a[i], b[j]) > power(b[j], a[i]))
            {
                ans++;
            }
        }
    }
    return ans;
}

int main()
{
    // vector<int> a = {2, 1, 6};
    vector<int> a = {2, 3, 4, 5};
    // vector<int> b = {1, 5};
    vector<int> b = {1, 2, 3};

    cout << countPairs(a, b);
}