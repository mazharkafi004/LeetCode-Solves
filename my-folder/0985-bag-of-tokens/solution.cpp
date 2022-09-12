class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());
        int i = 0, j = tokens.size(), n = j, score = 0;
        while (i < j)
        {
            if (tokens[i] <= power)
            {
                power -= tokens[i];
                i++;
                score++;
            }
            else if (j > i + 1 && score)
            {
                --j;
                power += tokens[j];
                score--;
            }
            else
            {
                break;
            }
        }
        return score;
    }
};
