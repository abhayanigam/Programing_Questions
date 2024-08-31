package ArraysQuestions;

import java.util.ArrayList;

public class BinarySearchLoopAndRecursion {
    public static void main(String[] args) {
        ArrayList<Integer> even = new ArrayList<>();
        even.add(2);
        even.add(4);
        even.add(6);
        even.add(8);
        even.add(12);
        even.add(18);

        System.out.println("Index of 6 is : " + binarySearchUsingloop(even,6));

        ArrayList<Integer> arr = new ArrayList<>();
        arr.add(2);
        arr.add(4);
        arr.add(6);
        arr.add(10);
        arr.add(14);
        arr.add(18);
        arr.add(22);
        arr.add(38);
        arr.add(49);
        arr.add(55);
        arr.add(222);
        System.out.println("Index of 6 is : " + binarySearchUsingRecursion(even,0,arr.size()-1,6));
    }

    private static int binarySearchUsingRecursion(ArrayList<Integer> arr,int left, int right, int index) {
        int mid = left + (right - left) / 2;

        if (left > right){
            return -1;
        }if (index == arr.get(mid)){
            return mid;
        }if (index > arr.get(mid)){
            return binarySearchUsingRecursion(arr,mid+1,right,index);
        }if (index < arr.get(mid)){
            return binarySearchUsingRecursion(arr,left, mid-1,index);
        }
        return -1;
    }

    private static int binarySearchUsingloop(ArrayList<Integer> arr, int index) {
        int left = 0, right = arr.size()-1;

        while(left <= right){
            int midElement = left + (right - left) / 2;

            if (arr.get(midElement) == index){
                return midElement;
            }if (index < arr.get(midElement)){
                right = midElement - 1;
            }if (index > arr.get(midElement)){
                left = midElement + 1;
            }
        }
        return -1;
    }
}
