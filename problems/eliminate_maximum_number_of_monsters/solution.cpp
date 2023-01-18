class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int ans = 1, n = dist.size(); 
        vector<int>reach;
        for(int i=0;i<n;i++){
          reach.push_back(ceil(dist[i]/(speed[i]*1.0)));
        }
        sort(reach.begin(),reach.end());
        for(int i=0;i<n;i++){
            if(ans>reach[i]){
                return i;
            }
            ans++;
            
        }
        return n;
    }
};