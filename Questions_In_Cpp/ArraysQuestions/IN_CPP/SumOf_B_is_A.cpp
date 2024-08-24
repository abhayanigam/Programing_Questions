#include <iostream>
using namespace std;

void multiplicationOfB(int a, int b){
    int pro = 1;
    while (b)
    {
        pro *= b%10;
        b /= 10;
    }
    if (pro == a)
    {
        cout << "It is Possible : " << a << " = " << pro  << endl;
    }
    else{
        cout << "Not Possible : " << endl;
    }
}

int main(){
    int a,b;
    cout << "Enter the value a : ";
    cin >> a;

    cout << "Enter the value of b : ";
    cin >> b;

    multiplicationOfB(a,b);
}