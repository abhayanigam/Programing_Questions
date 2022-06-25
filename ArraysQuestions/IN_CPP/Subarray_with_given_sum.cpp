#include <iostream>
using namespace std;

int subArraySum(int arr[],int size,int sum){
    int current;
    for (int i = 0; i < size; i++)
    {
        current = arr[i];
        for (int j = i+1; j <= size; j++)
        {
            if (current == sum)
            {
                cout<< "Sum found between indexes " << i << " and " << j-1;
                return 1;
            }
            if (current > sum || j == size)
            {
                break;
            }
            current = current + arr[j];
        }
    }
    cout << "No subarray found"<<endl;
    return 0;
}

int main()
{
    int arr[] = { 15, 2, 4, 8, 9, 5, 10, 23 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 23;
    subArraySum(arr, size, sum);
    return 0;
}