class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<vector<int>> result;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++; 
        }
        int maxi=0;
        for(auto it:mp){
            if(it.second>maxi){
                maxi=it.second;
            }
        }
        vector<vector<int>>ans(maxi,vector<int>());

        for(int i=0;i<maxi;i++){
            for(auto &it:mp){
                if(it.second>0){
                    ans[i].push_back(it.first);
                    it.second--;
                }
            }
        }
        return ans; 
    }
};
