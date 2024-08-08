/**
 * Given an integer array nums, design an algorithm to randomly shuffle the array. All permutations of the array should be equally likely as a result of the shuffling.

Implement the Solution class:

Solution(int[] nums) Initializes the object with the integer array nums.
int[] reset() Resets the array to its original configuration and returns it.
int[] shuffle() Returns a random shuffling of the array.

Example 1:

Input
["Solution", "shuffle", "reset", "shuffle"]
[[[1, 2, 3]], [], [], []]
Output
[null, [3, 1, 2], [1, 2, 3], [1, 3, 2]]

Explanation
Solution solution = new Solution([1, 2, 3]);
solution.shuffle();    // Shuffle the array [1,2,3] and return its result.
                       // Any permutation of [1,2,3] must be equally likely to be returned.
                       // Example: return [3, 1, 2]
solution.reset();      // Resets the array back to its original configuration [1,2,3]. Return [1, 2, 3]
solution.shuffle();    // Returns the random shuffling of array [1,2,3]. Example: return [1, 3, 2]

Note:
    To implement the Solution class that shuffles an array such that all permutations of the array are equally likely,
    we can use the Fisher-Yates shuffle algorithm. Here’s how we can implement the class in C++:

    Constructor: The constructor initializes the object with the integer array nums.
    reset(): This method resets the array to its original configuration and returns it.
    shuffle(): This method returns a random shuffling of the array.
 */

// #include <bits/std++.h>
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

#define vi vector<int>
#define vs vector<string>
#define st set<int>
#define vvi vector<vi>
#define vvs vector<vs>
#define ppi pair<int, int>
#define ppi pair<int, int>
#define vii vector<pii>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define ff first
#define ss second

class Solution
{
private:
    vector<int> original;
    vector<int> current;

public:
    Solution(vector<int> &nums)
    {
        original = nums;
        current = nums;
        srand(std::time(0));
    }

    // resets the array to its original configuration and returns it
    vector<int> reset()
    {
        current = original;
        return current;
    }

    // Return a random shuffling of the array
    vector<int> shuffle()
    {
        for (int i = current.size(); i > 0; i--)
        {
            int j = rand() % i + 1;
            swap(current[i], current[j]);
        }
        return current;
    }
};

int main()
{

    return 0;
}