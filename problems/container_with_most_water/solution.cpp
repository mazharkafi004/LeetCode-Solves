class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max = 0, mn = 0, area = 0;
        int i = 0, j = height.size() - 1;
        while (i < j)
        {
            if (height[i] > height[j])
            {
                mn = height[j];
                area = mn * (j - i);
                if (area > max)
                {
                    max = area;
                }
                j--;
            }
            else
            {
                mn = height[i];
                area = mn * (j - i);
                if (area > max)
                {
                    max = area;
                }
                i++;
            }
              }
        return max;
    }
};