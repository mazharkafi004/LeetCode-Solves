class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
      if(n<2){
          return nums[0];
      }
      vector<int> mem(n,0);
      mem[0] = nums[0];
      mem[1] = max(nums[0],nums[1]);
      for(int i=2;i<n;i++){
          mem[i] = max((nums[i]+mem[i-2]),mem[i-1]);
      }
      return mem[n-1];
    }
};
