class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, long long> answer;
        int n = nums.size();
        for (int i = 0; i < n ; i++)
        {
            answer[nums[i]]++;
        }

        for (auto p : answer)
        {
            if (p.second >= 2)
            {
                return true;
            }
        }
        return false;
    }
};