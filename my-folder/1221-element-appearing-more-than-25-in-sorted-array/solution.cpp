class Solution
{
public:
    int findSpecialInteger(vector<int> &nums)
    {
        map<int, int> check;
        int ans = 1, max = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            check[a]++;
        }
        for (auto i : check)
        {
            if (i.second > max)
            {
                max = i.second;
                ans = i.first;
            }
        }
        return ans;
    }
};
