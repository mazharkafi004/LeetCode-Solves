class Solution {
    public int waysToSplitArray(int[] nums) {
        long sum = 0;
        int count = 0;
        for(int i=0;i<nums.length;i++){
            sum+=nums[i];
        }
        long currSum = 0;
        for(int i=0;i<nums.length;i++){
            currSum+=nums[i];
            if(i<nums.length-1){
                if(currSum>=(sum-currSum)){
                    count++;
                }
            }
        }
        return count;
    }
}
