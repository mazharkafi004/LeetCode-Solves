class Solution {
public:
    double average(vector<int>& salary) {
        int n = salary.size(), mn = INT_MAX, mx = INT_MIN, sum = 0;
        for(int i=0;i<n;i++){
            sum+=salary[i];
            mn = min(mn,salary[i]);
            mx = max(mx,salary[i]);
        }
        sum -= (mn+mx);
        return (double)(sum*1.0)/(n-2);

    }
};
