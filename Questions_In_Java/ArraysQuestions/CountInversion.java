package ArraysQuestions;

import java.util.List;

/*
    Given an integer array arr[] of size n, the task is to find the count inversions of the given array.
    Two array elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

    Note: Inversion Count for an array indicates that how far (or close) the array is from being sorted.
    If the array is already sorted, then the inversion count is 0, but if the array is sorted in reverse order,
    the inversion count is the maximum.

    Examples:
        Input: arr[] = {4,3,2,1}
        Output: 6
        Explanation: Given array has 4 inversions: (4, 3), (4, 2), (4, 1), (3, 2), (3, 2), (2, 1) , (1)
                                                    <-------- 3 -------->  <---- 2 ----->  <- 1 ->  < 0 >
                                                    => 3+2+1+0 = 6
        Input: arr[] = {1, 2, 3, 4, 5}
        Output: 0
        Explanation: There is no pair of indexes i, j exists in the given array such that arr[i] > arr[j] and i < j

        Input: arr[] = {7, 2, 6, 3}
        Output: 4
        Explanation: Given array has 4 inversions: (7, 2), (7, 6), (7, 3), (6, 3)
                                                   <-------- 3 --------->  <- 1 ->
                                                   => 3+1 = 4
 */
public class CountInversion {

    public static void main(String[] args) {
//        List<Integer> arr = List.of(4, 3, 2, 1);
        List<Integer> arr = List.of(7, 2, 6, 3);

        System.out.println("Ans is : " + getInvCount(arr));
    }

    private static int getInvCount(List<Integer> arr) {
        int count = 0;

        for (int i = 0; i < arr.size()-1; i++) {
            for (int j = i+1; j < arr.size(); j++) {
                if (arr.get(i) > arr.get(j))
                    count++;
            }
        }

        return count;
    }
}
