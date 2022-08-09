class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> ans;
        int start = 0, end = 0, mx = 0;
        while (end < fruits.size())
        {
            ans[fruits[end]]++;
             while(ans.size()>2)
            {
                if(ans[fruits[start]]==1)
                {
                    ans.erase(fruits[start]);
                }
                else
                {
                    ans[fruits[start]]--;
                }
                start++;
            }
            mx = max(mx, end - start + 1);
            end++;
        }
        return mx;
    }
};
