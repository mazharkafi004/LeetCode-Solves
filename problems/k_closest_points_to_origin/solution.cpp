class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> closestCounter;
        int n = points.size();
        for(int i=0;i<n;i++){
            int dist = pow(points[i][0],2)+pow(points[i][1],2);
            closestCounter.push_back(make_pair(dist,i));
        }
        sort(closestCounter.begin(), closestCounter.end());
        vector<vector<int>> ans(k, vector<int> (2, 0));
        for(int i=0;i<k;i++){
            int a = closestCounter[i].second;
            ans[i][0] = points[a][0];
            ans[i][1] = points[a][1];
        }
        return ans;
    }
};