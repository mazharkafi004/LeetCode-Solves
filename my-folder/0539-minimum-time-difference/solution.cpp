class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        int n = timePoints.size(), minDif = INT_MAX;
        vector<int>minutes(n,0);
        for(int i=0;i<n;i++){
            int hr = (timePoints[i][0] - '0' )*10+(timePoints[i][1] - '0');
            int mnt = (timePoints[i][3] - '0' )*10+(timePoints[i][4] - '0');
            minutes[i] = (hr*60)+mnt;
        }
        sort(minutes.begin(),minutes.end());
        minDif = abs(minutes[0]-minutes[n-1]);
        if(minDif>720){
                minDif = 1440 - minDif;
        }
        for(int i=1;i<n;i++){
            int dif = abs(minutes[i]-minutes[i-1]);
            if(dif>720){
                dif = 1440 - dif;
            }
            minDif = min(minDif,dif);
        }
        return minDif;
    }
};
