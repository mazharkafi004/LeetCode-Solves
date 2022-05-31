class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int l = 1, r = nums.size() - 1;
        while (l <= r)
        {
            int mid = (r - l) / 2 + l;
            int count = 0;
            for (int n : nums)
            {
                if (n <= mid)
                    ++count;
            }
            if (count <= mid)
            {
                l = mid + 1;
            }
            else if (count > mid)
            {
                r = mid - 1;
            }
        }
        return l;
    }
};
