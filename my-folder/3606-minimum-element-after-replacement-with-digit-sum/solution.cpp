class Solution {
public:
    int numSum(int n){
        int num = 0;
        string s = to_string(n);
        for(int i=0;i<s.size();i++){
            num+=s[i]-'0';
        }
        return num;
    }
    int minElement(vector<int>& nums) {
        int mn = INT_MAX;
        for(int i=0;i<nums.size();i++){
            mn = min(mn,numSum(nums[i]));
        }
        return mn;
    }
};
