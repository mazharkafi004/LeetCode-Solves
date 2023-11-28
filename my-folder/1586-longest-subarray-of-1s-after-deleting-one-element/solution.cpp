class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0, mx = 0,z=0;

        while(right<n){
          if(nums[right]==0){
              z++;
          }
          while(z>1){
              if(nums[left]==0){
                  z--;
              }
              left++;
          }
          mx = max(mx,right-left);
          right++;
        } 
        return mx==n?mx-1:mx;
    }
};
