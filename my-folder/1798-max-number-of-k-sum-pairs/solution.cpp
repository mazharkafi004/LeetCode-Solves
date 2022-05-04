class Solution
{
public:
    int maxOperations(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int count = 0;
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            if (nums[i] + nums[j] == k)
            {
                count++;
                i++;
                j--;
            }
            else if (nums[i] + nums[j] > k)
            {

                j--;
            }
            else if (nums[i] + nums[j] < k)
            {

                i++;
            }
        }
        return count;
    }
};
