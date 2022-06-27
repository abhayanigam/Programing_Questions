#include <iostream>
using namespace std;

struct findLM{
    int min,max;
};

findLM getMinMax(int arr[], int size){
    struct findLM minmax;

    //If there is only one element then return it as min and max both
    if (size == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];
        return minmax;
    }

    //If there are more than one elements,then initialize min and max
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }else{
        minmax.max = arr[1];
        minmax.min = arr[0];
    }

    for (int i = 2; i < size; i++)
    {
        if (minmax.max < arr[i])
        {
            minmax.max = arr[i];
        }
        else if (minmax.min > arr[i])
        {
            minmax.min = arr[i];
        }
    }
    return minmax;
}

int main(){
    int arr[] = { 1000, 11, 445, 1, 330, 3000 };
    int size = sizeof(arr)/sizeof(arr[0]);

    findLM minMax = getMinMax(arr,size);

    cout << "The Max Number is : " << minMax.max << endl;
    cout << "The Min Number is : " << minMax.min << endl;
}

//----------------------------------------------------------
/*
#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size : ";
    cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element " << i+1 << " : ";
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout << "Largest : " << largest << endl;
    cout << "Smallest : " << smallest << endl;
}
*/