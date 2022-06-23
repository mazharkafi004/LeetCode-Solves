class Solution
{
public:
    int findLengthOfLCIS(vector<int> &nums)
    {
        int l = 0, r = 1, s = l, count = 1, mx = INT_MIN;
        while (l < nums.size() - 1)
        {

            while (r < nums.size())
            {

                if (nums[r] > nums[s])
                {
                    count++;
                }
                else
                {
                    break;
                }
                s++;
                r++;
            }
            mx = max(count, mx);
            count = 1;
            l++;
            s = l;
            r = l + 1;
        }
        return max(mx, 1);
    }
};
