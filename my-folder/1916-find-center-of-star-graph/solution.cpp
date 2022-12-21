class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        for(int i=0;i<edges.size();i++){
            for(int j=0;j<edges[0].size();j++){
                mp[edges[i][j]]++;
            }
        }
        int mx = 0, ans = -1;
        for(auto m:mp){
           if(m.second>mx){
               mx = m.second;
               ans = m.first;
           }
        }
        return ans;
    }
};
