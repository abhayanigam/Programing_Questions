/*
    Q. Vidhi is making rangoli for diwali. She is making a very different
        rangoli which is made up of N characters where N is even, the rangoli
        should only contain the characters a or b. The rangoli is palindromic in 
        nature meaning it reads the same backward as forward.

        Ankit is the is the younger brother of vidhi and is very mischievous. He
        has replaced some of the characters in the rangoli with '/'. Now vidhi has to
        replace all the the occurrences of '/' with either a or b such that the rangoli
        is palindromic in nature. The cost of replacing '/' with a is X and the cost of
        replacing '/' with b is Y. Vidhi has to replace '/' such that total cost of replacing
        all the '/' is minimum and the resulting string is a palindrome.
        You have to find out the minimum cost if it is impossible to covert the given string to 
        palindrome print -1.

    Input Format:
        > First line of input will contain the number of test cases.
    For each test case, there will be of three lines.
        > The first line is the string whose palindrome is to constructed
        > The second line is the cost of replacing '/' with a that is X.
        > The third line is the cost of replacing '/' with b that is Y.

    Output Format:
        For each test, print a single integer on a new line: The minimum cost.

    Sample Input:
        2
        aba/bab/
        4
        6
        aaaabbbb
        12
        34

    Sample Output:
        10
        -1

    Explanation:
        Test Case 1: The only to produce a palindrome is to replace the 4th character of
        the string with 'b' and 8th character with 'a'.
        The first replacement costs 4, the second costs 6, so the total cost is 4+6=10.

        Test Case 2: There is no '/' character, and string is not a palindrome.
        We have no way to change it into a palindrome.
        Hence -1.
*/

#include <iostream>
using namespace std;

class test{
    private:
        string str;
        int x, y;

    public:
        // String
        void setStr(string str)
        {
            this->str = str;
        }
        string getStr()
        {
            return str;
        }

        // Int X
        void setX(int x)
        {
            this->x = x;
        }
        int getX()
        {
            return x;
        }

        // Int Y
        void setY(int y)
        {
            this->y = y;
        }
        int getY()
        {
            return y;
        }

        // reverse
        string reverse(string str, int start, int end)
        {
            if (start > end)
            {
                return str;
            }
            swap(str[start], str[end]);
            start++;
            end--;

            return reverse(str, start, end);
        }

        // Palindrome
        void isPalindrome(string str)
        {
            // cout << ((reverse(str, 0, str.length() - 1)) == str ? "0": "-1") << endl;
            if ((reverse(str, 0, str.length() - 1)) != str){
                cout << -1 << endl;
            }
        }

        // Removing backslash
        void backslashRemove()
        {
            int count = 0;

            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] == '/')
                {
                    if (count == 0)
                    {
                        str[i] = 'b';
                        count++;
                    }
                    else if (count == 1)
                    {
                        str[i] = 'a';
                        count--;
                    }
                }
            }
            isPalindrome(str);
        }
};

int main()
{
    int testCase;
    cout << "Enter the testCase : ";
    cin >> testCase;

    test obj[testCase];
    string data;
    int x, y;

    for (int i = 0; i < testCase; i++)
    {
        cout << "Enter the str : ";
        cin >> data;
        obj[i].setStr(data);

        cout << "Enter the num x " << i+1 << " : ";
        cin >> x;
        obj[i].setX(x);

        cout << "Enter the num y " << i+1 << " : ";
        cin >> y;
        obj[i].setY(y);
    }
    for (int i = 0; i < testCase; i++)
    {
        i = obj[i].getX() + obj[i].getY();
        cout << min(i,i+1) <<endl;
    }

    for (int i = 0; i < testCase; i++)
    {
        obj[i].backslashRemove();
    }
    return 0;
}