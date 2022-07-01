class Solution
{
public:
    static bool compare(vector<int> v1, vector<int> v2)
    {
        return v1[1] > v2[1];
    }
    int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
    {
        sort(boxTypes.begin(), boxTypes.end(), compare);

        int ans = 0, count = 0;

        while (truckSize > 0 && count < boxTypes.size())
        {
            int mn = min(truckSize, boxTypes[count][0]);
            truckSize -= mn;
            ans += (mn)*boxTypes[count][1];

            count++;
        }
        return ans;
    }
};