class Solution {
    public void moveZeroes(int[] nums) {
        int pos = 0, n = nums.length;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[pos++] = nums[i];
            }
        }
        for(;pos<n;pos++){
            nums[pos] = 0;
        }
    }
}
