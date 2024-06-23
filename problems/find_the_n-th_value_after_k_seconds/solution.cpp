class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int>nums(n,1);
        while(k--){
            for(int i=1;i<n;i++){
            nums[i] =(nums[i]+nums[i-1])% (1000000007);
        }
        }
           
        return nums[n-1];
    }
};