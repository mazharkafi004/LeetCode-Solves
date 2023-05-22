class Solution {
public:
    static bool compare(const pair<int,int>&num1 ,const pair<int,int>&num2){
        return num1.second>num2.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counter;
        int n = nums.size();
        for(int i=0;i<n;i++){
            counter[nums[i]]++;
        }
        vector<pair<int,int>> numPair(counter.begin(),counter.end());
        sort(numPair.begin(),numPair.end(),compare);
        vector<int> frequentElements;
        for(auto i=0;i<k;i++){
           const auto& element = numPair[i];
           frequentElements.push_back(element.first);
        }    
        return frequentElements;
    }
};