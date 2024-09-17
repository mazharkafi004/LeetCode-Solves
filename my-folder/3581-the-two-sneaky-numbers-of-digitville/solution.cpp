class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>result;
        int count = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==2){
                count++;
                result.push_back(nums[i]);
                if(count==2){
                    return result;
                }
            }
        }
        return result;
    }
};
