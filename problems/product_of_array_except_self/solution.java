class Solution {
    public int[] productExceptSelf(int[] nums) {
     int[] ans = new int[nums.length];
     int[] left = new int[nums.length];
     int[] right = new int[nums.length];
     left[nums.length-1] = 1; right[0] = 1;
     for(int i = nums.length - 2; i>=0;i--){
         left[i] = left[i+1]*nums[i+1]; 
     }
     for(int i = 1;i<nums.length;i++){
         right[i] = right[i-1]*nums[i-1]; 
     }
     for(int i = 0;i<nums.length;i++){
         ans[i] = right[i]*left[i]; 
     }
     return ans;
    }
}