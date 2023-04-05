class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
       long long prefix_sum = 0, n = nums.size() , ans = 0;
       for(int i=0;i<n;i++){
           prefix_sum+=nums[i];
           double avg = ceil(prefix_sum*1.0/(i+1));
           ans = max((int)ans,(int)avg);
       } 
       return ans;
    }
};