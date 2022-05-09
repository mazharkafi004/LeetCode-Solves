class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        int l = 0, r = numbers.size() - 1, a = 0;
        vector<int> sum;

        // return sum;
        while (l < r)
        {
            int mid = (r - l) / 2 + l;
            if (numbers[l] + numbers[r] == target)
            {
                sum.push_back(l + 1);
                sum.push_back(r + 1);

                break;
            }
            else if (numbers[l] + numbers[r] > target)
            {
                r--;
                //  = mid;
            }
            else if (numbers[l] + numbers[r] < target)
            {
                l++;
                //  = mid;
            }
        }
        return sum;
    }
};
