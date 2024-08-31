package ArraysQuestions;

/*
    Container with Most Water:

    Examples :
        Input: array = [1, 5, 4, 3]
        Output: 6
        Explanation :
            5 and 3 are distance 2 apart.
            So the size of the base = 2.
            Height of container = min(5, 3) = 3.
            So total area = 3 * 2 = 6

        Input: array = [3, 1, 2, 4, 5]
        Output: 12
        Explanation :
            5 and 3 are distance 4 apart.
            So the size of the base = 4.
            Height of container = min(5, 3) = 3.
            So total area = 4 * 3 = 12
*/

import java.util.ArrayList;

public class ContainerWithMostWater {
    public static void main(String[] args) {
        ArrayList<Integer> height = new ArrayList<>();
        height.add(1);
        height.add(8);
        height.add(6);
        height.add(2);
        height.add(5);
        height.add(4);
        height.add(8);
        height.add(3);
        height.add(7);

        System.out.println("Max Area is : " + maxArea1(height));
    }

    // Time complexity O(n^2)
    private static int maxArea1(ArrayList<Integer> arr) {
        int area = 0;
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i+1; j < arr.size(); j++) {
                area = Math.max(area, Math.min(arr.get(j), arr.get(i)) * (j - i));
            }
        }
        return area;
    }
}
