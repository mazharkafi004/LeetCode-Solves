class Solution {
    public int[] productExceptSelf(int[] nums) {
     int[] ans = new int[nums.length];
     int product = 1,zero=0;
     for(int num:nums){
        if(num!=0){
            product*=num;
        }
        else{
            zero++;
            if(zero>1){
                return ans;
            }
        }
     }
     for(int i=0;i<nums.length;i++){
        if(nums[i]==0){
            ans[i] = product;
        }
        else{
            if(zero>0){
                ans[i] = 0;
            }
            else{
                ans[i] = product/ (nums[i]);
            }
        }
     }

     return ans;
    }
}
