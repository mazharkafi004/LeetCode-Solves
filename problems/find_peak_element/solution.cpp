class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {
        int n = nums.size();

        if (n == 1)
        {
            return 0;
        }
        else if (n == 2)
        {
            if (nums[1] > nums[0])
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else
        {
            int a = 0;
            for (int i = 1; i < n; i++)
            {
                if (nums[i] > nums[i - 1])
                {
                    if (i == n - 1)
                    {
                        a = n - 1;
                        break;
                    }
                    else if (nums[i] > nums[i + 1])
                    {
                        a = i;
                        break;
                    }
                }
              
            }
            return a;
        }
    }
};