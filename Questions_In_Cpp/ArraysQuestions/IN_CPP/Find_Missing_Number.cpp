#include <iostream>
using namespace std;

int getMissingNo_method1(int a[], int n)
{
	int total = (n + 1) * (n + 2) / 2;
    cout << "Total : " << total << endl;
	for (int i = 0; i < n; i++)
        //21 - 1 - 2 - 4 - 5 - 6 = 3
		total -= a[i];
	return total;
}

int getMissingNo_method2(int arr[], int size)
{
	int sum = 0;
    for(int i=0; i<size-1; i++)  
        sum += arr[i];

    cout << "Sum : " << sum <<endl;
    
    return (size*(size+1))/2 - sum;
}

int main()
{
	int arr[] = { 1, 2, 4, 5, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);
    cout << "n : " << n <<endl;

	int miss = getMissingNo_method1(arr, n);
	cout <<"Method 1 : " << miss << endl;
	
    int miss2 = getMissingNo_method2(arr, n);
	cout <<"Method 2 : " <<  miss2 << endl;
}
