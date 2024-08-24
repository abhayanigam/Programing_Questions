/*
    Calculating Power using recursion

    i/p:
        a = 3 , b = 2

    o/p:
        3^2 = 9

    Method 1: (Using loop)
        int ans = 1;
        for(i to b){
            ans *= a;
        }
        return ans;

    Method 2: (Using Recursion)
        a^b ---> b is even : a^b/2 * a^b/2;
            ---> b is add  : a*(a^b/2 * a^b/2);cc
*/

#include <iostream>
using namespace std;

int power(int a, int b)
{
    // base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // RECURSIVE CALL
    int ans = power(a, b / 2);

    // if b is even
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        // if b is odd
        return a * ans * ans;
    }
}

int main()
{

    int a, b;
    cout << "Enter the value : ";
    cin >> a;

    cout << "Enter the value for power : ";
    cin >> b;

    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    return 0;
}