public class Solution {
    public int MaxProduct(int[] A) {
        int max = A[0];
        int min = A[0];
        int maxProduct = A[0];

        for(int i = 1; i < A.Length; i ++) {
            int temp = max;
            max = Math.Max(Math.Max(A[i], max*A[i]), min*A[i]);
            min = Math.Min(Math.Min(A[i], min*A[i]), temp*A[i]);
            if(max > maxProduct)
                maxProduct = max;
        }
        return maxProduct;  
    }
      
}