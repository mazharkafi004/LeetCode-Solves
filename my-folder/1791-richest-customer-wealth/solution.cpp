class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int n = accounts.size();
        int m = accounts[0].size();
        for(int i=0;i<n;i++){
            int wealth = 0;
            for(int j=0;j<m;j++){
                wealth+= accounts[i][j];
            }
            if(wealth>max_wealth){
                max_wealth = wealth;
            }
        }
        return max_wealth;
    }
};
