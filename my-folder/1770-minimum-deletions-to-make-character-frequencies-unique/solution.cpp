class Solution
{
public:
    int minDeletions(string s)
    {
        vector<int> count(26, 0);
        for (int k = 0; k < s.size(); k++)
        {
            count[s[k] - 'a']++;
        }
        int ans = 0;
        sort(count.begin(), count.end());
        for (int i = 24; i >= 0; i--)
        {
            if (count[i] == 0)
            {
                break;
            }
            if (count[i] >= count[i + 1])
            {
                int a = count[i];
                count[i] = max(0, count[i + 1] - 1);
                ans += a - count[i];
            }
        }
        return ans;
    }
};
