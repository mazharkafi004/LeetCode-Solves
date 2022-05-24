class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int max_profit = 0, current_profit = 0;
        int l = 0, r = 1;
        while (r < prices.size())
        {

            current_profit = prices[r] - prices[l];
            if (current_profit < 0)
            {
                l = r;
            }

            r++;
            if (current_profit > max_profit)
            {
                max_profit = current_profit;
            }
        }
        return max_profit;
    }
};