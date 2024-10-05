class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {

        unordered_map<char, int> counter;
        for (int i = 0; i < s1.size(); i++)
        {
            counter[s1[i]]++;
        }
        int start = 0, end = 0, k = s1.size(), count = counter.size();
        while (end < s2.size())
        {
            if (counter.find(s2[end]) != counter.end())
            {
                counter[s2[end]]--;

                if (counter[s2[end]] == 0)
                {
                    count--;
                }
            }
            if ((end - start + 1) < k)
            {
                end++;
            }
            else if ((end - start + 1) == k)
            {
                if (count == 0)
                {
                    return true;
                }
                if (counter.find(s2[start]) != counter.end())
                {
                    counter[s2[start]]++;
                    if (counter[s2[start]] == 1)
                    {
                        count++;
                    }
                }
                start++;
                end++;
            }
        }
        return false;
    }
};
