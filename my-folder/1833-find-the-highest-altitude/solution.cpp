class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx = 0, sum = 0, n = gain.size();
        for(int i=0;i<n;i++){
            sum+=gain[i];
            mx = max(sum,mx);
        }
        return mx;
    }
};
