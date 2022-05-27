class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        map<int, long long> answer;
        for (int i = 0; i < nums.size(); i++)
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