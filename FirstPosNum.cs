public class Solution {
    public int FirstMissingPositive(int[] arr) {
          for(int  i = 0 ; i < arr.Length;i++){
                if(arr[i] < arr.Length   && arr[i] > 0 && arr[i] != arr[arr[i]-1]){
                    Swap(arr,i,arr[i]-1);
                }
            }            
            int count = 1;
            for(int  i = 0 ; i < arr.Length;i++){
                
                if(arr[i] != i+1){
                   return i+1;
                    
                }
                if (arr[i] > 0)
                {
                    count++;                   
                }
            }         

            return count;
    }
    
        private static void Swap(int[] arr, int i, int j)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            if(arr[i] < arr.Length && arr[i] > 0 && arr[i] != arr[arr[i]-1])
                Swap(arr,i,arr[i]-1);
        }
}