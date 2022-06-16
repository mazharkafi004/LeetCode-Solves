class Solution
{
public:
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        unordered_map<char, int> counter;
        for (int i = 0; i < p.size(); i++)
        {
            counter[p[i]]++;
        }
        int i = 0, j = 0, count = counter.size(), k = p.size();
        while (j < s.size())
        {
            if (counter.find(s[j]) != counter.end())
            {
                counter[s[j]]--;
                if (counter[s[j]] == 0)
                {
                    count--;
                }
            }
            if ((j - i) + 1 < k)
            {
                j++;
            }
            else if (j - i + 1 == k)
            {
                if (count == 0)
                {
                    ans.push_back(i);
                }
                if (counter.find(s[i]) != counter.end())
                {
                    counter[s[i]]++;
                    if (counter[s[i]] == 1)
                    {
                        count++;
                    }
                }

                i++;
                j++;
            }
        }
        return ans;
    }
};
