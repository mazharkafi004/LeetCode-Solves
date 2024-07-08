class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int ans = numBottles, emptyBottle = numBottles, exchangeBottle = 0, tradedBottle = 0;
        while (emptyBottle >= numExchange)
        {

            exchangeBottle = emptyBottle / numExchange;
            ans += exchangeBottle;
            tradedBottle = emptyBottle % numExchange;
            emptyBottle = exchangeBottle + tradedBottle;
        }
        return ans;
    }
};
