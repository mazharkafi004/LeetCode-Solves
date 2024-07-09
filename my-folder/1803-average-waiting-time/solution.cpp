class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long currentTime = customers[0][0];
        long long n = customers.size(), totalWaitingTime = 0;
        double  avgWaitingTime;
        for(int i=0;i<n;i++){
            if((long long)customers[i][0]>currentTime){
                currentTime = customers[i][0] + customers[i][1];
            }
            else{
                currentTime+=customers[i][1];
            }
            // cout<<currentTime<<endl;
            totalWaitingTime+= (currentTime-customers[i][0]);
            // cout<<totalWaitingTime<<endl;
        }
        avgWaitingTime = totalWaitingTime / (n*1.0);
        return avgWaitingTime;
    }
};
