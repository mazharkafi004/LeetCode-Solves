class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
       vector<int> subarraySums;
        const unsigned int mod = 1000000007;
        
        for(int i = 0; i < n; ++i) {
            int sum = 0;
            for(int j = i; j < n; ++j) {
                sum = (sum + nums[j]) % mod;
                subarraySums.push_back(sum);
            }
        }
        
        sort(subarraySums.begin(), subarraySums.end());
        
        int result = 0;
        for(int i = left - 1; i < right; ++i) {
            result = (result + subarraySums[i]) % mod;
        }
        
        return result;
    }
};
