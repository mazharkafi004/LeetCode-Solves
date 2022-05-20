class Solution
{
public:
    int maxDistance(vector<int> &nums1, vector<int> &nums2)
    {
        int d = 0, l = 0, r = 0;

        while (l < nums1.size() && r < nums2.size())
        {
            if (nums1[l] <= nums2[r])
            {
                d = max(d, r - l);
                r++;
            }
            else
            {
                l++;
                r++;
            }
        }
        return d;
    }
};