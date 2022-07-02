class Solution
{
public:
    int maxArea(int h, int w, vector<int> &horizontalCuts, vector<int> &verticalCuts)
    {
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());

        int maxh = horizontalCuts[0], maxv = verticalCuts[0];
        for (int i = 1; i < horizontalCuts.size(); i++)
        {
            maxh = max(maxh, horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        for (int i = 1; i < verticalCuts.size(); i++)
        {
            maxv = max(maxv, verticalCuts[i] - verticalCuts[i - 1]);
        }

        return ((long long)maxh * (long long)maxv) % 1000000007;
    }
};