#include <iostream>
using namespace std;

void printLineByLine(int num){
    int r, i = 0, j, arr[100];
    while (num)
    {
        arr[i] = num % 10;
        i++;
        num /= 10;
    }
    for ( j = i-1; j >-1; j--)
    {
        cout << "Digit : " << arr[j] << endl;
    }
}

void totalDigit(int num){
    int n = 0;
    while (num)
    {
        num /= 10;
        n++;
    }
    cout << "Total number of digit are : " << n << endl;
}

void sumOfTheDigit(int num){
    int sum = 0;
    while (num )
    {
        sum += num%10;
        num /= 10;
    }
    cout << "The sum of the digit is : " << sum <<endl;
}

void productOfTheDigit(int num){
    int pro = 1;
    while (num)
    {
        pro *= num % 10;
        num /= 10;
    }
    cout << "The product of the digit is : " << pro <<endl;
}

void printSpellNumber(int num){
    if (num == 0)
    {
        return;
    }
    char str[10][6]{
        "ZERO","ONE","TWO","THREE","FOUR",
        "FIVE","SIX","SEVEN","EIGHT","NINE",
    };

    printSpellNumber(num/10);
    cout << str[num%10] << endl;
}

int main(){
    cout << "Enter the Digit : ";
    int num ;
    cin >> num;

    printLineByLine(num);
    
    totalDigit(num);
    
    sumOfTheDigit(num);

    productOfTheDigit(num);

    printSpellNumber(num);
}