class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>ans(queries.size(),0);
        sort(nums.begin(),nums.end());
        for(int i=0;i<queries.size();i++){
            int sum = 0;
            for(int j = 0; j<nums.size();j++){
               sum += nums[j];
               if(sum<=queries[i]){
                 ans[i] = j+1;
               } 
            }
        }
        return ans;
    }
};