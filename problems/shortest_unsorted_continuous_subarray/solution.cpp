class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {
        int c = 0, d = 0, count = 0;
        int j = nums.size() - 1;
        vector<int> a;
        a = nums;
        sort(a.begin(), a.end());
        for (int k = 0; k <= j; k++)
        {
            if (nums[k] != a[k])
            {
                c = k;
                count++;
                break;
            }
        }
        for (int k = j; k >= 0; k--)
        {
            if (nums[k] != a[k])
            {
                d = k;
                count++;
                break;
            }
        }
        if (count == 0)
        {
            return 0;
        }
        return d - c + 1;
    }
};