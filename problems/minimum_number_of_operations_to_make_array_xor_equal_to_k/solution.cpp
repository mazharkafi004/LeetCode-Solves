class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int ans = 0, value = nums[0] ;
        for(int i=1;i<nums.size();i++){
            value^= nums[i];
        }
        while(k != 0 || value != 0){
            int a = k&1;
            int b = value&1;
            if( a != b){
                ans++;
            }
            k = k >> 1;
            value = value >> 1;
        }
        return ans;
    }
};