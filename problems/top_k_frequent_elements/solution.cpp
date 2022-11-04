class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        map<int, int> counter;
        vector<int> temp;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            counter[nums[i]]++;
        }
        int i = 0;
        multimap<int, int> multiMap;

        for (auto m : counter)
        {
            multiMap.insert(make_pair(m.second, m.first));
        }
        for (auto em : multiMap)
        {
            temp.push_back(em.second);
        }
        if (temp.size() == k)
        {
            return temp;
        }
        for (int i = temp.size() - 1; i >= (temp.size()) - k; i--)
        {
            ans.push_back(temp[i]);
        }
        return ans;
    }
};