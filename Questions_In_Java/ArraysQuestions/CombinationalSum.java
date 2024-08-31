package ArraysQuestions;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;

/*
    Given an array of positive integers arr[] and an integer x, The task is to find all unique
    combinations in arr[] where the sum is equal to x.
    The same repeated number may be chosen from arr[] an unlimited number of times.
    Elements in a combination (a1, a2, …, ak) must be printed in non-descending order.
    (ie, a1 <= a2 <= … <= ak). If there is no combination possible print “Empty”.

    Examples:

    Input: arr[] = 2, 4, 6, 8, x = 8
    Output:
        [2, 2, 2, 2]
        [2, 2, 4]
        [2, 6]
        [4, 4]
        [8]
 */
public class CombinationalSum {
    public static void main(String[] args) {
        ArrayList <Integer> arr = new ArrayList<>();

        arr.add(2);
        arr.add(4);
        arr.add(6);
        arr.add(8);

        int sum = 8;

        ArrayList< ArrayList<Integer>> ans = combinationSum(arr,sum);

        if (ans.isEmpty()){
            System.out.println("Empty");
        }

        // print all the combinations stored in ans
        for (int i = 0; i < ans.size(); i++) {
            System.out.print("(");
            for (int j = 0; j < ans.get(i).size(); j++) {
                System.out.print(ans.get(i).get(j) + " ");
            }
            System.out.print(") ");
        }
    }

    private static ArrayList<ArrayList<Integer>> combinationSum(ArrayList<Integer> arr, int sum) {
        ArrayList< ArrayList<Integer>> ans = new ArrayList<>();

        ArrayList<Integer> temp = new ArrayList<>();

        Set<Integer> set = new HashSet<>(arr);
        arr.clear();
        arr.addAll(set);
        Collections.sort(arr);

        findNumbers(ans, arr, sum, 0, temp);
        return ans;
    }

    private static void findNumbers(ArrayList<ArrayList<Integer>> ans, ArrayList<Integer> arr, int sum, int index, ArrayList<Integer> temp) {
        if (sum == 0) {
            ans.add(new ArrayList<>(temp));
            return;
        }

        for (int i = index; i < arr.size(); i++) {
            if ((sum - arr.get(i)) >= 0) {
                temp.add(arr.get(i));

                findNumbers(ans, arr, sum - arr.get(i), i,temp);

                temp.remove(arr.get(i));
            }
        }
    }
}
