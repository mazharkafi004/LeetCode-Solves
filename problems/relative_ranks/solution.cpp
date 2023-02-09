class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> que(score.begin(),score.end());
        unordered_map<int,string> mp;
        int num = 4; 
        vector<string> ans;
        if(!que.empty()){
          mp[que.top()] = "Gold Medal";
          que.pop();
        }
        if(!que.empty()){
          mp[que.top()] = "Silver Medal";
          que.pop();
        }
        if(!que.empty()){
          mp[que.top()] = "Bronze Medal";
          que.pop();
        }
        while(!que.empty()){
          mp[que.top()] = to_string(num);
          que.pop();
          num++;
        }
        int n = score.size();
        for(int i = 0; i<n;i++){
            ans.push_back(mp[score[i]]);
        }
        return ans;

    }
};