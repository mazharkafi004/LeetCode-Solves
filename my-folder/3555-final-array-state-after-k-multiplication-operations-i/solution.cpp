class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            pq.push({nums[i],i});
        }
        while(k--){
            int mult = 1;
            auto top = pq.top();
            pq.pop();
            mult = top.first * multiplier;
            pq.push({mult,top.second});
        }
        while(!pq.empty()){
            auto top = pq.top();
            pq.pop();
            nums[top.second] = top.first;
        }
        return nums;
    }
};
