class Solution
{
public:
    int trap(vector<int> &height)
    {
        if (height.size() < 2)
        {
            return 0;
        }
        int trappedWater = 0;
        int n = height.size(), left = 1, right = n - 2;
        int maxLeft = height[0], maxRight = height[n - 1];
        while (left <= right)
        {
            if (maxLeft < maxRight)
            {
                if (maxLeft < height[left])
                {
                    maxLeft = height[left];
                }
                else
                {
                    trappedWater += maxLeft - height[left];
                }
                left++;
            }
            else
            {
                if (maxRight < height[right])
                {
                    maxRight = height[right];
                }
                else
                {
                    trappedWater += maxRight - height[right];
                }
                right--;
            }
        }
        return trappedWater;
    }
};