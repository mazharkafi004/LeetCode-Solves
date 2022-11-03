class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        if (arr.size() < 3)
        {
            return false;
        }
        int i = 0, n = arr.size(), inc = 1, dec = 1;
        while (i < n)
        {
            if (arr[i] < arr[i + 1])
            {
                i++;
                inc = 0;
            }
            else if (arr[i] > arr[i + 1])
            {
                break;
            }
            else
            {
                return false;
            }
        }
        while (i < n - 1)
        {
            if (arr[i] > arr[i + 1])
            {
                i++;
                dec = 0;
            }
            else
            {
                return false;
            }
        }
        if (inc == 0 && dec == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};