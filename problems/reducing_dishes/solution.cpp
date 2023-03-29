class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        int sum = 0, total = 0, ans = 0;
        sort(satisfaction.begin(),satisfaction.end());
        int n = satisfaction.size();
        for(int i=n-1;i>=0;i--){
            sum+= total + satisfaction[i];
            total+=satisfaction[i];
            ans = max(ans,sum);
        }
        return ans;
    }
};