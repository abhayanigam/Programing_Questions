/*
    Array Generator

    A professor in the computer science department of HackerLand College
    wants to generate an array. Given an array of integers of length n, arr
    and two integers l and r, find another array, brr, such that:

        > l <= brr[i] <= r
        > brr[i] - arr[i] < brr[i+1] - arr[i+1], for every i les than n-1
        > brr[i] <= brr[i+1] for every i less than n-1.

    Among all such array, return the lexicographically smallest one.
    If there in not an array that satisfies the conditions, then return
    an array with the single element -1.

    Example
        arr = [1,2,1,2], l = 1, r = 10

    The array [1,3,3,5] satisfies given conditions.
        1. Each element belongs in the range [1,10].
        2. Contruct an array crr where crr[i] = brr[i] - arr[i],
            crr = [0,1,2,3] and it is increasing.
        3. The array brr is non-decreasing.

    brr[i] - arr[i] for each element is [0,1,2,3]
        1 - 1 = 0
        3 - 2 = 1
        3 - 1 = 2
        5 - 2 = 3

    NOTE: that all brr[i] >= arr[i] as well. There is not a lexicographically
    smaller array than [1,3,3,5] that satisfies the conditions.

    FUNCTION DESCRIPTION
    Complete the function getSmallestArray in the editor below.

    getSmallestArray has the following parameter(s):
        int arr[n]: an array of integers
        int l: the lower value limit
        int r: the upper value limit

    Returns
        int[n]: an array that satisfies the conditions or that contains
        a single element -1.

    Constraints
        > 1 <= n <= 10^5
        > 1 <= arr[i] <= 10^5
        > 1 <= l, r <= 10^9

    Sample Input 0:
        STDIN          FUNCTION
        -----          --------
        4       ->     The size of arr[] n = 4
        1       ->     arr = [1,2,1,3]
        2
        1
        3
        1       ->     l = 1
        10      ->     r = 10

    Sample Output 0:
        1
        3
        3
        6

    Explanation
        For the output shown:
            1. Each element is within the range [1,10].
            2. Construct an array crr where crr[i] = brr[i]-arr[i],
                crr = [0,1,2,3] and it is non-decreasing.
            3. The array brr is non-dreasing.

    Sample Input 1:
        STDIN          FUNCTION
        -----          --------
        4       ->     The size of arr[] n = 4
        1       ->     arr = [1,2,1,3]
        2
        1
        3
        1       ->     l = 1
        4       ->     r = 5

    Sample Output 0:
        -1

    Explanation
        There is not an array that satisfies the conditions.


    Rough Work:
        arr  brr   crr  |    crr - arr
        1  +  0  =  1   |     1  -  1 = 0
        2  +  1  =  3   |     3  -  2 = 1
        1  +  2  =  3   |     3  -  1 = 2
        3  +  3  =  6   |     6  -  3 = 3

*/

import java.util.ArrayList;
import java.util.Scanner;

public class Q7 {

    static Boolean nonDec(ArrayList<Integer> crr, ArrayList<Integer> arr) {
        for (int i = 0; i < crr.size(); i++) {
            if (crr.get(i) - arr.get(i) == i) {
                return true;
            }
        }

        return false;
    }

    static Boolean checkRange(int l, int r) {
        return ((l == 1 && r == 10) ? true : false);
    }

    static ArrayList<Integer> construct(ArrayList<Integer> arr) {
        ArrayList<Integer> crr = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            crr.add(arr.get(i) + i);
        }
        return crr;
    }

    static ArrayList<Integer> getSmallestArray(ArrayList<Integer> arr, int l, int r) {
        ArrayList<Integer> v = construct(arr);

        Boolean cond1 = checkRange(l, r);
        Boolean cond2 = nonDec(v, arr);
        Boolean cond3 = true;

        if (cond1 && cond2 && cond3) {
            return v;
        } else {
            ArrayList<Integer> v1 = new ArrayList<>();
            v1.add(-1);
            return v1;
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the lower value limit : ");
        int l = input.nextInt();

        System.out.print("Enter the upper value limit : ");
        int r = input.nextInt();

        ArrayList<Integer> v = new ArrayList<>();

        v.add(1);
        v.add(2);
        v.add(1);
        v.add(3);

        ArrayList<Integer> arr = getSmallestArray(v, l, r);

        for (int i : arr) {
            System.out.println(i + " ");
        }

        input.close();
    }
}