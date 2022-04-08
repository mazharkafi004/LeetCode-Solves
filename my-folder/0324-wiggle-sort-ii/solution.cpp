class Solution
{
public:
    void wiggleSort(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int p[nums.size()];
        int l = nums.size() - 1;
        for (int i = 1; i < nums.size(); i = i + 2)
        {
            p[i] = nums[l];
            l--;
        }
        for (int i = 0; i < nums.size(); i = i + 2)
        {
            p[i] = nums[l];
            l--;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = p[i];
        }
    }
};
