class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double sum = 0, max_average = INT_MIN, average = 0;
        int start = 0, end = 0;
        while (end < nums.size())
        {
            sum += nums[end];
            if (end - start + 1 < k)
            {
                end++;
            }
            else if (end - start + 1 == k)
            {
                average = sum /  k;
                max_average = max(max_average, average);
                sum -= nums[start];
                start++;
                end++;
            }
        }
        return max_average;
    }
};