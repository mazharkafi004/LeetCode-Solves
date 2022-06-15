class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int count = 0, mn = INT_MAX, start = 0, end = 0, sum = 0;
        for (start = 0; end < nums.size(); end++)
        {
            sum += nums[end];
            if (sum >= target)
            {
                count = (end - start) + 1;
                mn = min(count, mn);
                while (true)
                {
                    sum -= nums[start];
                    if (sum >= target)
                    {
                        start++;
                        count = (end - start) + 1;
                        mn = min(count, mn);
                    }
                    else
                    {
                        sum += nums[start];
                        break;
                    }
                }
            }
        }
        if (mn == INT_MAX)
        {
            return 0;
        }
        return mn;
    }
};
