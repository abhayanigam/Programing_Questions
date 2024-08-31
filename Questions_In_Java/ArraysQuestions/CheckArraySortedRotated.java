package ArraysQuestions;

import java.util.ArrayList;

public class CheckArraySortedRotated {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();

        arr.add(3);
        arr.add(4);
        arr.add(5);
        arr.add(1);
        arr.add(2);

        if (check(arr,arr.size())){
            System.out.println("Rotated Array is sorted");
        }else{
            System.out.println("Rotated Array is not sorted");
        }
    }

    private static boolean check(ArrayList<Integer> arr, int size) {
        int count = 0;

        for (int i = 0; i < size; i++) {
            if (arr.get(i) > arr.get((i+1)%size)){
                count ++;
            }
        }
        // Return true if there is at most one point where
        // the sequence is out of order
        return count <=1;
    }
}
