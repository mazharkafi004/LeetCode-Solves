class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        int n = nums.size();
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto i:freq){
          pq.push({i.second,i.first});
        }
        vector<int> frequentElements;
        int cnt = 0;
        while(!pq.empty()){
            if(cnt==k){
                break;
            }
            int element = pq.top().second;
            frequentElements.push_back(element);
            cnt++;
            pq.pop();
        }  
        return frequentElements;
    }
};