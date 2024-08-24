/*
    Antonio and his girlfriend decided to move their relationship to the next level and bought an array 
    from a nearby arrays shop(name of the shop). 
    As you may have already guessed, both of them are programmers.
    They define the value of an array as the number of unique elements it has. 
    Like value of array [1,2,1,2,2,3]= 3 as it has 3 unique elements(1,2 and 3), value of array [1,2,3,4] = 4 and so on.
    After a few days, their relationship went through a tough phase and they decided to break up with each other. 
    While breaking up they also decided to break up the bought array among themselves.

    To break up the array, they decided to split the elements of the array among themselves such that the total value of the
    final arrays they receive is as maximum as possible. For this they went to a nearby relationshin counselor (you).
    
    Given the array,
        Antonio and his girlfriend bought, print the maximum possible total value of the final arrays they can achieve if they divide the 
        elements of the bought array optimally.

    Note:
        It may be possible that one of them does not receive any element of the bought array.

    Input Format:
        First line contains a single integer denoting N.
        Next line contains N space separated integers denoting the elements of the bought array.

    Output Format:
        Print the maximum possible total value of the final arrays Antonio and his girlfriend can achieve if they divide the elements of the bought array optimally.
    
    Constraints:
        1<-N<-10^5 1<= element of the array<=10^9
    
    Sample Input 1:
        6
        121223

    Sample Output 1:    
        5

    Explanation of Sample 1:
        They can divide the array elements as: Antonio receives the 1st, 4th and 5th elements of the array.
        His girlfriend receives rest of the elements i.e. 2nd, 3rd, and 6th. 
        Value of array Antonio receives = value of array [1,2,2] = 2 Value of array his girlfriend receives = value of array [2,1,3] = 3 Hence total value = 2+3= 5. 
        It can be proved that this is the maximum possible value.
*/

/*
                                            Size of an array
Index      =  0   1    2   3     4     5    = 6 (Elements)
Array      =  1   2    1   2     2     3
Antonio    = 1st           4th  5th  
GirlFriend =     2nd  3rd             6th 

Antonio    = 1,2,2 = 2 --> Total Elements
GirlFriend = 2,1,3 = 3 --> Total Elements

Hence, Total value is 2+3 = 5.
*/

#include <iostream>
#include <set>
using namespace std;

int sum (int arr[], int size){
    int count1 = 0, count2 = 0;
    set<int> s1;
    set<int> s2;

    for (int i = 0; i < size; i++)
    {
        if (arr[0])
        {
            s1.insert(arr[0]);
        }
        if (arr[3])
        {
            s1.insert(arr[3]);
        }
        if (arr[4])
        {
            s1.insert(arr[4]);
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[1])
        {
            s2.insert(arr[1]);
        }
        if (arr[2])
        {
            s2.insert(arr[2]);
        }
        if (arr[5])
        {
            s2.insert(arr[5]);
        }
    }

    for (auto i = s1.begin(); i!=s1.end(); i++)
    {
        // cout << *i << " ";
        count1 +=1;
    }

    // cout<< "count 1: " << count1 << endl;

    for (auto i = s2.begin(); i!=s2.end(); i++)
    {
        // cout << *i << " ";
        count2 +=1;
    }
    // cout<< "count 2: " << count2 << endl;

    return (count1+count2);
}

int main()
{
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << sum(arr,size) << endl;
    return 0;
}