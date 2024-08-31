package ArraysQuestions;

import java.util.ArrayList;
import java.util.Collections;

public class ThreeSumClosest{

    static int threeSumClosestUsingList(ArrayList<Integer> arr, int target){
        ArrayList<Integer> result = new ArrayList<>();
        for(int i = 0; i<arr.size() -2; i++){
            for(int j = i+1; j<arr.size()-1; j++){
                for(int k = j+1; k<arr.size(); k++){
                    result.add(arr.get(i)+arr.get(j)+arr.get(k));
                }
            }
        }
        return closestElementList(result, target);
    }

    static int closestElementList(ArrayList<Integer> result, int target) {
        Collections.sort(result);

        int closest = result.get(0);

        int minDifference = Math.abs(target-closest);

        for (int num : result) {
            int difference = Math.abs(target-num);

            if (difference < minDifference){
                minDifference = difference;
                closest = num;
            }
        }
        return closest;
    }

    static int threeSumClosestUsingArray(int[] arr, int target){
        int closest = Integer.MIN_VALUE;

        for (int i = 0; i<arr.length-2; i++){
            for (int j = i+1; j<arr.length-1; j++){
                for (int k = j+1; k<arr.length; k++){
                    if (Math.abs(target-(arr[i]+arr[j]+arr[k])) < Math.abs(target-closest)){
                        closest = (arr[i] + arr[j] + arr[k]);
                    }
                }
            }
        }

        return closest;
    }

    public static void main(String[] args){

        int target = 1;

        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(-1);
        arr.add(2);
        arr.add(1);
        arr.add(-4);
        System.out.println("Closest Number is : " + threeSumClosestUsingList(arr,target));

        int[] array = {-1,2,1,-4};
        System.out.println("Closest Number is : " + threeSumClosestUsingArray(array,target));
    }
}
