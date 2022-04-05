class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int a = -999999;
        if (nums.size() == 1)
        {
            a = nums[0];
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1;)
        {

            if ((nums[i] != nums[i + 1]))
            {
                a = nums[i];
                break;
            }

            else
            {
                i += 2;
            }
        }
        if (a == -999999)
        {
            a = nums[nums.size() - 1];
        }
        return a;
    }
};
