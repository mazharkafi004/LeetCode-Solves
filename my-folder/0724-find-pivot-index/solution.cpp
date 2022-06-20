class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int leftsum = 0, rightsum = 0;
        for (int i = 1; i < nums.size(); i++)
        {
            rightsum += nums[i];
        }
        int l = 0, r = 1;
        while (l < nums.size())
        {
            if (leftsum == rightsum)
            {
                return l;
            }
            else
            {
                if (l + 1 == nums.size() - 1)
                {
                    leftsum += nums[l];
                    rightsum = 0;
                    if (leftsum == rightsum)
                    {
                        return l + 1;
                    }
                    else
                    {
                        return -1;
                    }
                }
                else
                {
                    leftsum += nums[l];

                    rightsum -= nums[l + 1];
                    l++;
                }
            }
        }
        return -1;
    }
};
