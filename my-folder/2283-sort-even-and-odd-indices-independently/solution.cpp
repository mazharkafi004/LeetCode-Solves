class Solution
{
public:
    vector<int> sortEvenOdd(vector<int> &nums)
    {
        vector<int> a(nums.size(), 0);
        vector<int> c, d;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                c.push_back(nums[i]);
            }
            else
            {
                d.push_back(nums[i]);
            }
        }
        // return a;
        sort(c.begin(), c.end());

       sort(d.begin(), d.end(), greater<int>());

        for (int i = 0; i < nums.size(); i++)
        {
            if (i % 2 == 0)
            {
                a[i] = c[i / 2];
            }
            else
            {
                a[i] = d[i / 2];
            }
        }
        return a;
    }
};
