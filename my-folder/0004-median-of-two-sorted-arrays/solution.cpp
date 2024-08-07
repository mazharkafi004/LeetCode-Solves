class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> temp;
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size())
        {
            if (nums1[i] < nums2[j])
            {
                temp.push_back(nums1[i]);
                i++;
            }
            else
            {
                temp.push_back(nums2[j]);
                j++;
            }
        }
        while (i < nums1.size())
        {
            temp.push_back(nums1[i]);
            i++;
        }
        while (j < nums2.size())
        {
            temp.push_back(nums2[j]);
            j++;
        }
        int m = temp.size()/2;
        if (temp.size() % 2 ==1)
        {
            return temp[m]*1.0;
        }

        return (temp[m] + temp[(m - 1)]) / 2.0;
    }
};
