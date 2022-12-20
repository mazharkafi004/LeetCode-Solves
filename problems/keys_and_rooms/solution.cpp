class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
      vector<bool>visited(rooms.size(),false);
      queue<int> queue;
      queue.push(0);
    
     while( !queue.empty()){
        for(int i=0;i<queue.size();i++){
             int top = queue.front();
             queue.pop();
             visited[top] = true;
            
            for(auto ck:rooms[top]){
                if(!visited[ck]){
                queue.push(ck);
                }
            }
        }
     }

     int cnt = count( visited.begin(), visited.end(), true );
     if(cnt==rooms.size()){
         return true;
     }
     return false;


    }

  
};