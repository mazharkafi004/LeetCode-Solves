class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> ans;
        unordered_map<int,int> mp;
        priority_queue<int>pq(arr.begin(),arr.end());
        
        for(auto x : arr){
            mp[x]++;
        }
        int m = mp.size();
        while(!pq.empty()){
           int a = mp[pq.top()];
           while(a--){
            mp[pq.top()] = m;
            pq.pop();
            if(a==0){
                m--;
            }
           }
        }
        int n = arr.size();
        for(int i=0;i<n;i++){
            ans.push_back(mp[arr[i]]);
        }
        return ans;

    }
};
