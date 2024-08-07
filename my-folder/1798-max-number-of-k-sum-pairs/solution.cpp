class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(mp[k-nums[i]]>0){
                count++;
                mp[k-nums[i]]--;
            }
            else{
                mp[nums[i]]++;
            }
        }
        return count;
    }
};
