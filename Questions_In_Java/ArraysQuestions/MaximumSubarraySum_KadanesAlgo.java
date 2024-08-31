package ArraysQuestions;

public class MaximumSubarraySum_KadanesAlgo{
	
    static int kadanesAlgo(int[] a){
		int max_so_far = 0, max_so_end = 0;

		for(int i = 0; i<a.length; i++){
			max_so_end += a[i];

			if(max_so_end > max_so_far){
				max_so_far = max_so_end;
			}
			if(max_so_end < 0){
				max_so_end = 0;
			}
		}
		return max_so_far;
	}
    
    static int UsingMaxMethod(int[] arr){
        int currentSum = arr[0];
        int maxSum = arr[0];

        for(int i = 1; i<arr.length; i++){
            currentSum = Math.max(arr[i], currentSum+arr[i]);
            maxSum = Math.max(maxSum, currentSum);
        }

        return maxSum;
    }

	public static void main(String[] args){
		int[] a = { -2, -3, 4, -1, -2, 1, 5, -3 };
		
        System.out.println("Maximum contiguous sum is " + kadanesAlgo(a));
	    System.out.println("Maximum contiguous sum is " + UsingMaxMethod(a));
    }
}
