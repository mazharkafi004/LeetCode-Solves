class Solution {
public:
    bool isBipartite(vector<int>& colors,vector<vector<int>>& adj,int i){
        queue<int>que;
        que.push(i);
        colors[i] = 1;
        while(!que.empty()){
            int top = que.front();
            que.pop();
            for(auto c:adj[top]){
                if(colors[c]==colors[top]){
                   return false;
                }
                if(colors[c]==-1){
                  que.push(c);
                  colors[c] = 1 - colors[top];
                }
            }
        }
        
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<vector<int>>adj(n+1);
        
         for(auto d:dislikes){
            adj[d[0]].push_back(d[1]);
            adj[d[1]].push_back(d[0]);
        }
     
        vector<int>colors(n+1,-1);

        for(int i=0;i<n;i++){
            if(colors[i]==-1){
                if(!isBipartite(colors,adj,i)){
                    return false;
                }
            }
        }
    return true;
    }
};