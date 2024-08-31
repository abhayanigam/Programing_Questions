package ArraysQuestions;

/*
    Calculating Power using recursion

    i/p:
        a = 3 , b = 2
    o/p:
        3^2 = 9

    Method 1: (Using loop)
        int ans = 1;
        for(i to b){
            ans *= a;
        }
        return ans;

    Method 2: (Using Recursion)
        a^b ---> b is even : a^b/2 * a^b/2;
            ---> b is add  : a*(a^b/2 * a^b/2);
*/

public class CalculatePowerUsingRecursion {
    public static void main(String[] args) {
        int a = 3, b = 0;

        // Using pre define method
        System.out.println("The power is : " + Math.pow(a,b));

        // Using loop method
        System.out.println("Using loop method the power is : " + powerLoop(a,b));

        // Using Recursion method
        System.out.println("Using Recursion method the power is : " + powerRecursion(a,b));
    }

    private static int powerRecursion(int a, int b) {
        if (b == 1){
            return a;
        }if (b == 0){
            return 1;
        }

        int ans = powerRecursion(a,b/2);

        if (b % 2 == 0){
            return ans * ans;
        }else{
            return  a*ans*ans;
        }
    }

    private static int powerLoop(int a, int b) {
        int ans = 1; // always start with 1
        for (int i = 0; i < b; i++) {
            ans *= a;
        }
        return ans;
    }
}
