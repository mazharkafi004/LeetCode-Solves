class Solution {
public:
    int minOperations(vector<int>& nums) {
    int res = 0, last = 0;
    for (int i=0;i<nums.size();i++) {
        res += max(0, last - nums[i] + 1);
        last = max(nums[i], last + 1);
    }
    return res;
}
};