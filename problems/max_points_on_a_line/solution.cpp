class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        
        int ans = 0;
        
        for(int i=0;i<points.size();i++){
            int  mx = 0 ;
            int vertical = 0;
            unordered_map<double,int>slope;
            for(int j=0;j<points.size();j++){
                if(i==j){
                    continue;
                }
                int dx = points[j][0]-points[i][0];
                int dy = points[j][1]-points[i][1];
                if(dx==0){
                    vertical++;
                    mx = max(mx,vertical);
                    continue;
                }
              
                slope[(double)dy/(double)dx]++;
                mx = max(mx,slope[(double)dy/(double)dx]);
                
            }
            ans = max(ans,mx+1);
           
        }
        
  
      return ans;
    }
};