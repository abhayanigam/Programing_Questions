package ArraysQuestions;

/*
    Sample Input 1:
    1
    3 5
    1 2 2 3 1
    Sample Output 1:
    4
    Explanation of sample input 1:
        The ayush will read the chapter as follows,
        Day 1 : 1 , 2         Time required : 3
        Day 2 : 3             Time required : 2
        Day 3 : 4 , 5         Time required : 4
        So the maximum time in a day is 4.
    Sample Input 2:
    1
    4 7
    2 2 3 3 4 4 1
    Sample Output 2:
    6
    Explanation of sample input 2:
        The ayush will read the chapter as follows,
        Day 1 : 1 , 2          Time required : 4
        Day 2 : 3 , 4          Time required : 6
        Day 3 : 5              Time required : 4
        Day 4 : 6 , 7          Time required : 5
    So the maximum time in a day is 6.
*/

import java.util.Arrays;

public class AllocateBook {

    static boolean canDistributeChapters(int n, int[] time ,int maxTime){
        int daysNeeded = 1;
        int currentDayTime = 0;

        for (int t : time) {
            if (currentDayTime + t <= maxTime) {
                currentDayTime += t;
            } else {
                daysNeeded++;
                currentDayTime = t;
                if (daysNeeded > n) {
                    return false;
                }
            }
        }
        return true;
    }

    static void ayushGivesNinjatest(int n, int m, int[] time){
        int maxTimeLeft = Arrays.stream(time).max().orElse(0);
        int totalTimeLeft = Arrays.stream(time).sum();

        System.out.println("Max Time Left : " + maxTimeLeft);
        System.out.println("Total time left : " + totalTimeLeft);

        while(maxTimeLeft < totalTimeLeft){
            int mid = maxTimeLeft + (totalTimeLeft - maxTimeLeft) / 2;

            if (canDistributeChapters(n,time, mid)){
                totalTimeLeft = mid;
            }else {
                maxTimeLeft = mid + 1;
            }
        }

        System.out.println("Max Time : " + maxTimeLeft);
    }

    public static void main(String[] args){
        ayushGivesNinjatest(3,5,new int[]{1, 2, 2, 3, 1});
        ayushGivesNinjatest(4,7,new int[]{2, 2, 3, 3, 4, 4, 1});
    }
}
