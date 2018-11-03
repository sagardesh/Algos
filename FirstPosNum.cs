public class Solution {
    public int FirstMissingPositive(int[] arr) {
         for (int j = 0; j < arr.Length; j++)
            {
                if (arr[j] <= arr.Length && arr[j] > 0 && j != arr[j] - 1)
                {
                    if(arr[j] != arr[arr[j]-1])
                     Swap(arr, j, arr[j]-1);
                }
            }
            int count = 1;
            for (int i = 0; i < arr.Length; i++)
            {
                if (arr[i] != i + 1)
                    return i + 1;
                if (arr[i] > 0)
                {
                    count++;                   
                }
            }

            return count;
    }
    
        private static void Swap(int[] arr, int i, int j)
        {
            int x = arr[j];
                
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            if (x < arr.Length && x > 0 && x != arr[x] - 1 && arr[x] - 1 >= 0 && arr[x] - 1 < arr.Length)
            {
                if (arr[x] != arr[arr[x] - 1])
                    Swap(arr, x, arr[x] - 1);
            }
        }
}