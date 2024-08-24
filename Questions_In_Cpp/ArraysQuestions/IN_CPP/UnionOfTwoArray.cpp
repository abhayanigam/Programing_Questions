#include <iostream>
#include <set>
using namespace std;

int unionSet(int arr1[], int arr2[], int size1, int size2){
    set<int> s;

    for (int i = 0; i < size1; i++)
    {
        s.insert(arr1[i]);
    }

    for (int i = 0; i < size2; i++)
    {
        s.insert(arr2[i]);
    }

    cout << endl;
    cout << "Union Set are :";
    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    
    cout <<"The size of the union set is : ";
    return s.size();
}

int main()
{
    cout << "Enter the size for Array 1 : ";
    int size1;
    cin >> size1;
    
    int arr1[size1];

    for (int i = 0; i < size1; i++)
    {
        cout << "Enter the element" << i+1 << "for array 1 : ";
        cin >> arr1[i];
    }
    
    cout << endl;

    cout << "Enter the size for Array 2 : ";
    int size2;
    cin >> size2;
    
    int arr2[size2];

    for (int i = 0; i < size2; i++)
    {
        cout << "Enter the element" << i+1 << "for array 2 : ";
        cin >> arr2[i];
    }

    cout << unionSet(arr1,arr2,size1,size2);
    
    return 0;
}