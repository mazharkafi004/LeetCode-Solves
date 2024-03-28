class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int left = 0, right  = 0, n = nums.size(), mx = 0;
        while(right < n){
            mp[nums[right]]++;
            if(mp[nums[right]]>k){
                while(nums[left]!=nums[right]){
                    mp[nums[left]]--;
                    left++;
                }
                mp[nums[left]]--;
                left++;
            }
            mx = max(right-left+1,mx);
            right++;
            
            
        }
        return mx;
    }
};