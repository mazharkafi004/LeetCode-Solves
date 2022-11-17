class Solution
{
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2)
    {
        int sum = 0, df1 = 0, df2 = 0;
        sum += abs(ax2 - ax1) * abs(ay2 - ay1) + abs(bx2 - bx1) * abs(by2 - by1);
        df1 = min(ax2, bx2) - max(ax1, bx1);
        if (df1 < 0)
        {
            df1 = 0;
        }
        df2 = min(ay2, by2) - max(ay1, by1);
        if (df2 < 0)
        {
            df2 = 0;
        }
        return sum - (df1 * df2);
    }
};