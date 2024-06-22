class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int l = 0, r = 0, n = nums.size(),odd = 0, count = 0, result = 0;
        while(r < n){
            if(nums[r]%2==1){
                odd++;
                if(odd>=k){
                    count = 1;
                    while(nums[l++]%2==0){
                        count++;
                    }
                    result+=count;
                }
            }
            else if (odd >= k){
                result+=count;
            }
            r++;
        }
        return result;
    }
};
