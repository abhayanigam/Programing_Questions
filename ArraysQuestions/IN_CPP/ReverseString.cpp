#include <iostream>
#include <algorithm>
using namespace std;

// Passing string by reference in the function
void reverse(string& str, int i, int j){
    if (i>j)
        return;

    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

int main(){
    string name = "Abhaya";

    cout << "Before Reverse : " << name << endl;

    reverse(name , 0, name.length()-1);

    cout << "After Reverse : " << name << endl;
}