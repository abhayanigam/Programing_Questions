/*
    Antonio and his girlfriend decided to move their relationship to the next level and bought an array 
    from a nearby arrays shop(name of the shop). 
    As you may have already guessed, both of them are programmers.
    They define the value of an array as the number of unique elements it has. 
    Like value of array [1,2,1,2,2,3]= 3 as it has 3 unique elements(1,2 and 3), value of array [1,2,3,4] = 4 and so on.
    After a few days, their relationship went through a tough phase and they decided to break up with each other. 
    While breaking up they also decided to break up the bought array among themselves.

    To break up the array, they decided to split the elements of the array among themselves such that the total value of the
    final arrays they receive is as maximum as possible. For this they went to a nearby relationshin counselor (you).
    
    Given the array,
        Antonio and his girlfriend bought, print the maximum possible total value of the final arrays they can achieve if they divide the 
        elements of the bought array optimally.

    Note:
        It may be possible that one of them does not receive any element of the bought array.

    Input Format:
        First line contains a single integer denoting N.
        Next line contains N space separated integers denoting the elements of the bought array.

    Output Format:
        Print the maximum possible total value of the final arrays Antonio and his girlfriend can achieve if they divide the elements of the bought array optimally.
    
    Constraints:
        1<-N<-10^5 1<= element of the array<=10^9
    
    Sample Input 1:
        6
        121223

    Sample Output 1:    
        5

    Explanation of Sample 1:
        They can divide the array elements as: Antonio receives the 1st, 4th and 5th elements of the array.
        His girlfriend receives rest of the elements i.e. 2nd, 3rd, and 6th. 
        Value of array Antonio receives = value of array [1,2,2] = 2 Value of array his girlfriend receives = value of array [2,1,3] = 3 Hence total value = 2+3= 5. 
        It can be proved that this is the maximum possible value.
*/

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;

public class Solution{
    public static void main(String[] args) throws IOException {

        Integer n = Integer.valueOf(readLine());
        int[] a = new int[n];

        String arr = readLine();
        String[] a1 = arr.split(" ");
        for (int i = 0; i < a1.length; i++) {
            a[i] = Integer.valueOf(a1[i]);
        }

        int maxVal = maxCount(a);
        System.out.println(maxVal);

    }

    private static String readLine() throws IOException {
        System.out.print("Enter : ");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String input = br.readLine();
        return input;
    }

    private static int maxCount(int[] a) {
        Map<Integer, Integer> counts =  new HashMap<>();
        for (int i = 0; i < a.length; i++) {
            if(counts.containsKey(a[i])) {
                counts.put(a[i], counts.get(a[i])+ 1);
            }
            else {
                counts.put(a[i], 1);
            }
        }

        System.out.println(counts);

        int sum1 =0;
        int sum2 = 0;
        int total =  0;

        for (Map.Entry<Integer, Integer> e:  counts.entrySet() ) {
            Integer val = e.getValue();
            if(val == 1) { //odd
                sum1 = sum1 + 1;
            }
            else {
                sum1 = sum1 + 1;
                sum2 = sum2 + 1;
            }
            total = sum1 + sum2;
        }
        return total;
    }
}