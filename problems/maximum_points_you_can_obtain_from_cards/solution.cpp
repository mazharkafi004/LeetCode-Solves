class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int currentsum = 0, sum = 0, ans = INT_MIN, l = 0, r = 0, n = cardPoints.size();
        while (r < n)
        {
            sum += cardPoints[r];
            r++;
        }
        r = 0;
        if (n - k == 0)
        {
            return sum;
        }
        while (r < n)
        {
            currentsum += cardPoints[r];
            if (r - l + 1 < (n - k))
            {
                r++;
            }
            else
            {
                ans = max(ans, sum - currentsum);
                currentsum -= cardPoints[l];
                l++;
                r++;
            }
        }
        return ans;
    }
};