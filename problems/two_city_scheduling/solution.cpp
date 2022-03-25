class Solution
{
public:
    int twoCitySchedCost(vector<vector<int>> &costs)
    {
        sort(costs.begin(), costs.end(), [](const vector<int> &x, const vector<int> &y)
             { return (x[0] - x[1]) > (y[0] - y[1]); });

        int len = costs.size();

        int sum = 0;

        for (int i = 0; i < (len / 2); i++)
        {
            sum += costs[i][1];
        }
        for (int i = len / 2; i < len; i++)
        {
            sum += costs[i][0];
        }
        return sum;
    }
};