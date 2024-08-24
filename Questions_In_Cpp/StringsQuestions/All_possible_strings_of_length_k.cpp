#include <iostream>
using namespace std;

void printAllKLength(char set[], string prefix, int k, int size)
{
    if (k == 0)
    {
        cout << prefix << endl;
        return;
    }
    for (int i = 0; i < size; i++)
    {
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLength(set, newPrefix, k - 1, size);
    }
}

int main()
{
    char set1[] = {'a', 'b'}, set2[] = {'a', 'b', 'c'};
    int k = 3;

    cout << "For set1 : \n";
    printAllKLength(set1, "", k, 2);

    k = 1;

    cout << "For set2 : \n";
    printAllKLength(set2, "", k, 4);
}