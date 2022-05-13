class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int x)
    {
        int l = 0, r = nums.size() - 1;
        vector<int> a(2, -1);
        if (r < 0)
        {
            return a;
        }

        while (l < r)
        {
            int mid = (r + l) / 2;

            if (nums[mid] < x)
            {
                l = mid + 1;
            }

            else
            {
                r = mid;
            }
        }

        if (nums[l] == x)
        {
            a[0] = l;
        }
        r = nums.size() - 1;
        while (l < r)
        {
            int mid = (r + l) / 2 + 1;

            if (nums[mid] > x)
            {

                r = mid - 1;
            }

            else
            {
                l = mid;
            }
        }
        if (nums[r] == x)
        {
            a[1] = r;
        }
        //   a[1] = r;
        return a;
    }
};
