/*
    Container with Most Water:

    Examples :  
        Input: array = [1, 5, 4, 3]
        Output: 6
        Explanation : 
            5 and 3 are distance 2 apart. 
            So the size of the base = 2. 
            Height of container = min(5, 3) = 3. 
            So total area = 3 * 2 = 6

        Input: array = [3, 1, 2, 4, 5]
        Output: 12
        Explanation : 
            5 and 3 are distance 4 apart. 
            So the size of the base = 4. 
            Height of container = min(5, 3) = 3. 
            So total area = 4 * 3 = 12
*/

#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &v){
    int area = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = i+1; j < v.size(); j++)
        {
            area = max(area, min(v[j], v[i]) * (j-i) );
        }
    }

    return area;
}

int main(){
    vector <int> v;
    v.push_back(1);
    v.push_back(8);
    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(8);
    v.push_back(3);
    v.push_back(7);

    cout << maxArea(v) << endl;
}