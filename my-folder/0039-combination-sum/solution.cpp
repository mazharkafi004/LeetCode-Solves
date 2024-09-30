class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int>temp;
        backtrack(candidates,temp,result,0,target);
        return result;
    }
    void backtrack(vector<int>& candidates,vector<int>& temp, vector<vector<int>>& result, int start, int target){
        if(target<0){
            return;
        }
        if(target==0){
            result.push_back(temp);
        }
        for(int i=start;i<candidates.size();i++){
            temp.push_back(candidates[i]);
            backtrack(candidates,temp,result,i,target-candidates[i]);
            temp.pop_back();
        }

    }
};
