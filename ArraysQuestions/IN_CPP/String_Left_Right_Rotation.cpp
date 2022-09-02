// Left and Right Rotation of a string.

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void leftRotation(string &str, int pos){
    reverse(str.begin(), str.begin()+pos);
    reverse(str.begin()+pos, str.end());
    reverse(str.begin(), str.end());
}

void rightRotation(string &str, int pos){
    leftRotation(str, str.length()-pos);
}

int main(){
    string word;
    cout << "Enter the string : ";
    getline(cin,word);

    int pos;
    cout << "Enter the postion : ";
    cin >> pos;

    cout << "Left Rotation of the string : ";
    leftRotation(word,pos);
    cout << word << endl;

    // cout << "Right Rotation of the string : ";
    // rightRotation(word,pos);
    // cout << word << endl;
}