package ArraysQuestions;

import java.util.HashSet;
import java.util.Set;

/*
 * Given an integer array nums and an integer k,
 *  return true if there are two distinct indices i and j in
 *  the array *such that nums[i] == nums[j] and abs(i - j) <= k*.

    Example 1:
        Input: nums = [1,2,3,1], k = 3
        Output: true

    Example 2:
        Input: nums = [1,0,1,1], k = 1
        Output: true

    Example 3:
        Input: nums = [1,2,3,1,2,3], k = 2
        Output: false
 */
public class ContainsDuplicate {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 1};
        int k = 3;
        System.out.println(containsNearbyDuplicate(arr, k) ? "True" : "False");

        int[] arr1 = {1, 0, 1, 1};
        int k1 = 1;
        System.out.println(containsNearbyDuplicate(arr1, k1) ? "True" : "False");

        int[] arr2 = {1, 2, 3, 1, 2, 3};
        int k2 = 2;
        System.out.println(containsNearbyDuplicate(arr2, k2) ? "True" : "False");
    }

    private static boolean containsNearbyDuplicate(int[] arr, int k) {
        Set<Integer> seen = new HashSet<>();

        for (int i = 0; i < arr.length; i++) {
            if (!seen.add(arr[i])){
                return true;
            }if (i >= k){
                seen.remove(arr[i-k]);
            }
        }

        return false;
    }


}
