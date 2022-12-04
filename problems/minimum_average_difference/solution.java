class Solution {
    public int minimumAverageDifference(int[] nums) {
       
        long sum=0,pos=0,n=nums.length;
        long mn = mn=Long.MAX_VALUE;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        long leftSum=0,rightSum=0,leftAvg=0,rightAvg=0;
        
        for(int i=0;i<n;i++){
            
            leftSum+=nums[i];
            leftAvg = leftSum/(i+1);
            if(i==n-1){
                if(leftAvg<mn){
                    return (int)n-1;
                }
                else{
                    break;
                }
            }
            rightSum = sum-leftSum;
           
            rightAvg = rightSum/(n-i-1);
            
           
            int dif = Math.abs((int)(leftAvg-rightAvg));  
            if(dif<mn){
                mn = dif;
                pos = i;
            }
            
        }
       
        return (int)pos;
    }
}