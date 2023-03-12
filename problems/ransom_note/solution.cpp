class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        if (ransomNote.size() > magazine.size())
        {
            return false;
        }
        unordered_map<int, int> counter;
        for (int i = 0; i < magazine.size(); i++)
        {
            counter[magazine[i]]++;
        }
        for (int i = 0; i < ransomNote.size(); i++)
        {
            if (counter[ransomNote[i]] == 0)
            {
                return false;
            }
            else
            {
                counter[ransomNote[i]]--;
            }
        }
        return true;
    }
};