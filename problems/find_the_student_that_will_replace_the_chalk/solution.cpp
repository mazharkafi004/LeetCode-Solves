class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        vector<long long> temp(chalk.begin(),chalk.end());
       
        for (int i = 1; i < temp.size(); i++)
        {
            temp[i] += temp[i - 1];
        }
        k = k % temp[temp.size() - 1];
        int ans = 0;
        int l = 0, r = temp.size() - 1;
        while (l <= r)
        {
            int mid = (r - l) / 2 + l;
            if (temp[mid] > k)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return l;
    }
};