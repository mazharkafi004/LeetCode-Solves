class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, n = prices.size(), current_profit = 0, max_profit = 0;
        while(r<n){
            current_profit = prices[r]-prices[l];
            if(current_profit<0){
                l = r;
            }
            if(current_profit>max_profit){
                max_profit = current_profit;
            }
            r++;
        }
        return max_profit;
    }
};
