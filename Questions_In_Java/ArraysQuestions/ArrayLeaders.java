package ArraysQuestions;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.IntStream;

/**
 * Array Leaders
     Given an array arr of n positive integers, your task is to find all the leaders in the array.
     An element of the array is considered a leader if it is greater than all the elements on its
     right side or if it is equal to the maximum element on its right side. The rightmost element is always a leader.

     Examples
     Input: n = 6, arr[] = {16,17,4,3,5,2}
     Output: 17 5 2
     Explanation: Note that there is nothing greater on the right side of 17, 5 and, 2.
     Input: n = 5, arr[] = {10,4,2,4,1}
     Output: 10 4 4 1
     Explanation: Note that both of the 4s are in output, as to be a leader an equal element is also allowed on the right. side
     Input: n = 4, arr[] = {5, 10, 20, 40}
     Output: 40
     Explanation: When an array is sorted in increasing order, only the rightmost element is leader.
     Input: n = 4, arr[] = {30, 10, 10, 5}
     Output: 30 10 10 5
     Explanation: When an array is sorted in non-increasing order, all elements are leaders.
 */

public class ArrayLeaders {

    static boolean isListNonIncreasingSorted(ArrayList<Integer> arr)
    {
        return IntStream.range(1,arr.size()).allMatch(i-> arr.get(i) <= arr.get(i-1));
    }

    static boolean isListSortedGivenIndex(ArrayList<Integer> arr, int index)
    {
        if (index > arr.size())
        {
            return false;
        }
        return IntStream.range(1,index).allMatch(i-> arr.get(i) <= arr.get(i-1));
    }

    public static ArrayList<Integer> ArrayLeader(ArrayList<Integer> arr) {
        ArrayList<Integer> result = new ArrayList<>();

        int mid = arr.size() / 2, leftMaxElement = arr.get(0), rightMaxElement = arr.get(arr.size()-1);

        System.out.println("Mid Element is :" + arr.get(mid));

        if (isListNonIncreasingSorted(arr)){
            result.addAll(arr);
        }else {
            if (isListSortedGivenIndex(arr,mid)){
                arr.addAll(arr);
            }else{
                for (int i = 1; i < mid; ++i)
                {
                    if (arr.get(i) > leftMaxElement)
                    {
                        leftMaxElement = arr.get(i);
                    }
                }
                result.add(leftMaxElement);

                for (int i = mid + 1; i < arr.size(); i++)
                {
                    if (arr.get(i) > rightMaxElement)
                    {
                        result.add(arr.get(i));
                    }
                    else
                    {
                        result.add(arr.get(i));
                    }
                }
            }
        }

        return result;
    }

    public static void main(String[] args){
        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(16);
        arr.add(17);
        arr.add(4);
        arr.add(3);
        arr.add(5);
        arr.add(2);

        ArrayList<Integer> result = ArrayLeader(arr);
        printElements(result);

        ArrayList<Integer> arr2 = new ArrayList<>();
        arr2.add(30);
        arr2.add(10);
        arr2.add(10);
        arr2.add(5);

        ArrayList<Integer> result2 = ArrayLeader(arr2);
        printElements(result2);
    }

    private static void printElements(ArrayList<Integer> result) {
        for (int i :
                result) {
            System.out.print(i + " ");
        }
    }

}
