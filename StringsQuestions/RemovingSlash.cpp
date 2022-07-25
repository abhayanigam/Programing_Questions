#include <iostream>
#include <string>
using namespace std;

int main(){
    string str = "aba/bab/";
    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '/')
        {
            if (count == 0)
            {
                str[i] = 'b';
                count++;
            }else if(count == 1){
                str[i] = 'a';
                count--;
            }
        }
    }
    cout << str << endl;
}