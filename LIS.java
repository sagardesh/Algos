class Solution {
    public int lengthOfLIS(int[] nums) {
        int len = nums.length;
        
        if(len == 0){
            return 0;
        }
        if(len == 1){
            return 1;
        }
        
        int[] res = new int[len];
        for(int i = 0;i<res.length;i++){
            res[i] = 1;
        }
        
        for(int i = 0; i < res.length;i++){
            for(int j = 0;j<i;j++){
                if(nums[j] < nums[i] && res[j] + 1 > res[i]){
                    res[i] = res[j] + 1;
                }
            }
        }
        
        int max  = 0;
        for(int i = 0;i<res.length;i++){
            if(res[i] > max)
                max= res[i];
        }
        
        return max;
    }
}