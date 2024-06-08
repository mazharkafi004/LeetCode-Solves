class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // Map to store the first occurrence of each remainder
        unordered_map<int, int> mp;
        mp[0] = -1; // Initialize for the case when the prefix sum itself is multiple of k
        int pref_sum = 0, n = nums.size();
        
        for (int i = 0; i < n; i++) {
            pref_sum += nums[i];
            int mod = pref_sum % k;
            
            // Handle negative modulo result
            if (mod < 0) {
                mod += k;
            }
            
            if (mp.find(mod) != mp.end()) {
                if (i - mp[mod] > 1) {
                    return true; // Found a valid subarray
                }
            } else {
                mp[mod] = i; // Store the first occurrence of the remainder
            }
        }
        
        return false; // No valid subarray found
    }
};
