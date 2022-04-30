class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {

        sort(nums.begin(), nums.end());
        vector<int> a(2, 0);
        for (int i = 0; i < nums.size(); i++)
        {
            if (i > 0)
            {
                if (nums[i] == nums[i - 1])
                {
                    a[0] = nums[i];

                    nums.erase(nums.begin() + i);
                    break;
                }
            }
        }
        for (int i = 1; i <= nums.size(); i++)
        {
            if (i != nums[i - 1])
            {
                a[1] = i;
                break;
            }
        }
        if (a[1] == 0)
        {
            a[1] = nums[nums.size() - 1] + 1;
        }

        return a;
    }
};
