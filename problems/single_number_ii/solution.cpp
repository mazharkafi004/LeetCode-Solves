class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int ans = 0;
        map<int, int> check;
        for (int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            check[a]++;
        }
        for (auto it : check)
        {
            if (it.second == 1)
            {
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};