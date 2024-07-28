/**
    ### Explanation:

    1. **Starting from the Largest Element**:
        - `i = n - 1` starts the loop from the last element of the sorted array. This element is considered as the potential sum of two other elements in the array.

    2. **Iterating Backwards**:
        - The loop iterates backwards (`i--`) through the array. This means for each iteration, the element at index `i` is treated as the target sum (`arr[i]`) of two other elements (`arr[left]` and `arr[right]`).

    3. **Ensuring Enough Elements for a Triplet**:
        - The loop runs while `i >= 2`. This ensures that there are at least two other elements before `arr[i]` to form a valid triplet. Specifically, `arr[left]` and `arr[right]` are chosen from the subarray `arr[0]` to `arr[i-1]`.

    - **Sorted Array**:
        - The array is sorted at the beginning, so when `arr[i]` is the largest element considered as the sum, we can efficiently find pairs using the two-pointer technique.

    - **Two-Pointer Technique**:
        - For each `arr[i]`, two pointers (`left` starting from the beginning and `right` starting just before `i`) are used to find pairs that sum up to `arr[i]`.


    Given `arr = [1, 2, 3, 5]` (sorted array):
        1. **First Iteration (i = 3)**:
            - `arr[i] = 5`
            - Two pointers: `left = 0` (arr[0] = 1), `right = 2` (arr[2] = 3)
            - Check if `arr[left] + arr[right] = 1 + 3 = 4` (not equal to 5, move left pointer)
            - Check if `arr[left] + arr[right] = 2 + 3 = 5` (equal to 5, count it)

        2. **Second Iteration (i = 2)**:
            - `arr[i] = 3`
            - Two pointers: `left = 0` (arr[0] = 1), `right = 1` (arr[1] = 2)
            - Check if `arr[left] + arr[right] = 1 + 2 = 3` (equal to 3, count it)
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int CountTheTriplets(vector<int> arr)
{
    /*
        1. Sort the array
        2. define count
        3. define for loop with login i = arr.size()-1; i>=2
        4. define while loop(left < right)
        5. then binary search logic
    */

    sort(arr.begin(), arr.end());

    int count = 0;

    for (int i = arr.size() - 1; i >= 2; i--)
    {
        int left = 0, right = i - 1;

        while (left < right)
        {
            if (arr[left] + arr[right] == arr[i])
            {
                count++;
                left++;
                right--;
            }
            if (arr[left] + arr[right] < arr[i])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return count;
}

int main()
{
    vector<int> arr = {1, 5, 3, 2};
    // vector<int> arr = {2, 3, 4};

    cout << "There are " << CountTheTriplets(arr) << " triplets" << endl;
    return 0;
}