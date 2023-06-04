class Solution {
public:
    void dfs(vector<vector<int>>& isConnected,vector<bool>& visited,int city){
        visited[city] = true;
        int n = isConnected.size();
        for(int i=0;i<n;i++){
            if(!visited[i] && isConnected[city][i]==1){
                dfs(isConnected,visited,i);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<bool> visited(n, false);
        int count = 0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                count++;
                dfs(isConnected,visited,i);
            }
        }
        return count;
    }
};
