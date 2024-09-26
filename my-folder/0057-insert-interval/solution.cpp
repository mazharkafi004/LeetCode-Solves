class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back({newInterval[0],newInterval[1]});
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>merge;

        for(auto interval:intervals){
            if(merge.empty() || merge.back()[1] < interval[0]){
                merge.push_back({interval[0],interval[1]});
            }
            else{
                merge.back()[1] = max(merge.back()[1],interval[1]);
            }
        }
        return merge;
    }
};
