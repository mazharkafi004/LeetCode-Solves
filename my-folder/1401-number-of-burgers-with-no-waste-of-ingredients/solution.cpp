class Solution
{
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices)
    {
        vector<int> ans;
        // return ans;
        int cheese1 = cheeseSlices, cheese2 = 0;

        while (cheese1 >= 0)
        {
            if (((cheese1 * 2) + (cheese2 * 4)) == tomatoSlices)
            {
                return {cheese2,cheese1};
            }
            else
            {
                cheese1--;
                cheese2++;
            }
        }
        return ans;
    }
};
