class Solution
{
public:
    bool checkIfExist(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());

        int count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                if (arr[i + 1] == 0)
                {
                    return true;
                }
            }
            else
            {
                int l = 0, r = arr.size() - 1;
                while (l <= r)
                {
                    int mid = (r - l) / 2 + l;
                    if (arr[mid] == (2 * arr[i]))
                    {
                        return true;
                    }
                    else if (arr[mid] < (2 * arr[i]))
                    {
                        l = mid + 1;
                    }
                    else
                    {
                        r = mid - 1;
                    }
                }
            }
        }

        return false;
    }
};