class Solution
{
public:
    int maxSatisfied(vector<int> &customers, vector<int> &grumpy, int minutes)
    {
        int ans = 0;

        for (int i = 0; i < customers.size(); i++)
        {
            if (!grumpy[i])
            {
                ans += customers[i];
                customers[i] = 0;
            }
        }
        int l = 0, r = 0, windowSum = 0, maxSum = INT_MIN;
        while (r < customers.size())
        {
            windowSum += customers[r];
            if (((r - l) + 1) < minutes)
            {
                r++;
            }
            else
            {
                maxSum = max(maxSum, windowSum);
                windowSum -= customers[l];
                l++;
                r++;
            }
        }

        return ans + maxSum;
    }
};