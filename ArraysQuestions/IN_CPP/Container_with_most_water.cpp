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

// Time complexity O(n^2)
int maxArea1(vector<int> &height)
{
    int area = 0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i + 1; j < height.size(); j++)
        {
            area = max(area, min(height[j], height[i]) * (j - i));
        }
    }

    return area;
}

// Time Complexity O(n)
int maxArea2(vector<int> height)
{
    int left = 0, right = height.size() - 1;
    int area = 0;

    while (left < right)
    {
        area = max(area, min(height[left], height[right]) * (right - left));

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return area;
}

int main()
{
    vector<int> height;
    height.push_back(1);
    height.push_back(8);
    height.push_back(6);
    height.push_back(2);
    height.push_back(5);
    height.push_back(4);
    height.push_back(8);
    height.push_back(3);
    height.push_back(7);

    cout << maxArea1(height) << endl;
    cout << maxArea2(height) << endl;
}