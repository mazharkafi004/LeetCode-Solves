class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int mn = INT_MAX,ans = 0;
        int n = points.size();
        for(int i=0;i<n;i++){
            if(points[i][0]==x || points[i][1]==y){
                int dif = abs(points[i][0]-x)+abs(points[i][1]-y);
                if(dif<mn){
                    mn = dif;
                    ans = i;
                }
            }
        }
        if(mn==INT_MAX){
            return -1;
        }
        return ans;
    }
};