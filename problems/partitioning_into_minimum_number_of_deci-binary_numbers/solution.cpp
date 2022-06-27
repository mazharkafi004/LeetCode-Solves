class Solution
{
public:
    int minPartitions(string n)
    {
        int mx = INT_MIN;
        for (int i = 0; i < n.size(); i++)
        {
            int digit_value = n[i] - '0';
            mx = max(mx, digit_value);
        }
        return mx;
    }
};