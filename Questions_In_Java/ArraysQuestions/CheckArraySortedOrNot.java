package ArraysQuestions;

import java.util.ArrayList;

public class CheckArraySortedOrNot {
    public static void main(String[] args) {
        ArrayList<Integer> arr = new ArrayList<>();

        arr.add(20);
        arr.add(23);
        arr.add(23);
        arr.add(45);
        arr.add(78);
        arr.add(88);

        if (arrayIsSorted(arr,arr.size())){
            System.out.println("Array is sorted");
        }else{
            System.out.println("Array is not sorted");
        }
    }

    static boolean arrayIsSorted(ArrayList<Integer> arr, int size) {
        if (size == 1 || size == 0){
            return true;
        }

        return arr.get(size-1) >= arr.get(size-2) && arrayIsSorted(arr,size-1);
    }
}
