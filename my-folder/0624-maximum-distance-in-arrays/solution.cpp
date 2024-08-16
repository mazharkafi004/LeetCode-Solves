class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int n = arrays.size(), minSoFar = arrays[0][0], maxSoFar = arrays[0][arrays[0].size()-1];
        int maxDistance = 0;
        for(int i=1;i<n;i++){
            maxDistance = max(maxDistance,max(maxSoFar-arrays[i][0], arrays[i][arrays[i].size()-1] - minSoFar));
            maxSoFar = max(maxSoFar,arrays[i][arrays[i].size()-1]);
            minSoFar = min(minSoFar,arrays[i][0]);
        }
        return maxDistance;
    }
};
