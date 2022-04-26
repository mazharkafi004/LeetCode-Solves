class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int a = 0;
        for (int i = 0; i < nums.size(); i++)
        {

            while (1)
            {
                if (i + 1 == nums.size())
                {
                    break;
                }
                int j = i + 1;

                if (nums[j] == nums[j - 1])
                {
                    nums[j - 1] = 101;

                    j++;
                    a++;
                }
                else
                {
                    break;
                }
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size() - a;
    }
};