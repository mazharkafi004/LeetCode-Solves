class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int arrow = 1;
        sort(points.begin(),points.end());
        int limit = points[0][1];
        for(int i=0;i<points.size();i++){
            if(points[i][0]>limit){
                arrow++;
                limit = points[i][1];
            }
            else{
                if(limit>points[i][1]){
                    limit = points[i][1];
                }
            }
        }
        return arrow;
    }
};