class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        set<vector<int>> ans;
        
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int l = j+1,r = nums.size()-1;
                while(l<r){
                    long long sum = (long long) nums[i]+nums[j]+nums[l]+nums[r];
                    if(sum==target){
                        ans.insert({nums[i],nums[j],nums[l],nums[r]});
                        r--;
                    }
                    else if(sum>target){
                        r--;
                    }
                    else{
                        l++;
                    }
                }
            }
        }
        vector<vector<int>> fourSome(ans.begin(),ans.end());
        return fourSome;
    }
};
