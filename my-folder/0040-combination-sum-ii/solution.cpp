class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> result;
    vector<int> current;
    helper(result, current, candidates, target, 0, 0);
    return result;
}
void helper(vector<vector<int>>& result, vector<int>& current, const vector<int>& candidates, int target, int i, int previous){
    if(target == 0){
        result.push_back(current);
        return;
    }
    if(i == candidates.size() || target < 0) return;
    helper(result, current, candidates, target, i + 1, target);
    if(i > 0 && candidates[i - 1] == candidates[i] && previous == target) return; 
    current.push_back(candidates[i]);
    helper(result, current, candidates, target - candidates[i], i + 1, target);
    current.pop_back();
}
};
