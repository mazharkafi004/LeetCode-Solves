class Solution
{
public:
    int lastStoneWeight(vector<int> &stones)
    {
        int a = 0;
        while (stones.size() > 1)
        {
            if (a != 0)
            {
                break;
            }
            sort(stones.begin(), stones.end());

            if (stones[stones.size() - 1] == stones[stones.size() - 2])
            {

                if (stones.size() == 2)
                {
                    a++;
                    break;
                }
                stones.erase(stones.end() - 2);
                stones.erase(stones.end() - 1);
            }
            else if (stones[stones.size() - 1] > stones[stones.size() - 2])
            {

                stones[stones.size() - 1] = stones[stones.size() - 1] - stones[stones.size() - 2];
                stones.erase(stones.end() - 2);
            }
        }
        if (a == 0)
        {
            return stones[0];
        }
        else
        {
            return 0;
        }
    }
};
