package ArraysQuestions;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class ArrayLeftRotate {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        System.out.print("Enter the size : ");
        int size = input.nextInt();

        System.out.print("Enter the index : ");
        int index = input.nextInt();

        List<Integer> arr = new ArrayList<>();

        for (int i = 0; i < size; i++) {
            System.out.print("Enter the element No. " + i + " : ");
            int element = input.nextInt();
            arr.add(element);
        }

        rotateArray(arr,index);
        input.close();
    }

    private static void rotateArray(List<Integer> arr, int index) {
        for (int i = 0; i < arr.size(); i++) {
            System.out.print(arr.get((index+i)%arr.size()) + " ");
        }
    }
}
