class Solution {
public:
    bool bfs(vector<vector<int>>& adj,vector<bool>& visited,int source,int destination){
       queue<int>queue;
       queue.push(source);
       visited[source] = true;
       while(!queue.empty()){
           int top = queue.front();
           if(top==destination){
               return true;
           }
           queue.pop();
           for(auto m:adj[top]){
             if(!visited[m]){
                 visited[m] = true;
                 queue.push(m);
             }
           }
       }
       return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        if(n==1){
            if(source==destination){
                return true;
            }
            return false;
        }
        vector<vector<int>> adj(n+1);
        for(int i=0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0]);
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        vector<bool>visited(edges.size(),false);
        return bfs(adj,visited,source,destination);

    }
};
