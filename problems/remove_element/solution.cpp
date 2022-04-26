class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int a = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == val)
            {
                nums[i] = 101;
                a++;
            }
        }
        sort(nums.begin(), nums.end());
        return nums.size()-a;
    }
};