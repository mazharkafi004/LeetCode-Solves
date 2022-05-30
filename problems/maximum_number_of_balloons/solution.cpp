class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        vector<int> count(5, 0);
        for (int i = 0; i < text.length(); i++)
        {
            if (text[i] == 'b')
            {
                count[0]++;
            }
            else if (text[i] == 'a')
            {
                count[1]++;
            }
            else if (text[i] == 'l')
            {
                count[2]++;
            }
            else if (text[i] == 'o')
            {
                count[3]++;
            }
            else if (text[i] == 'n')
            {
                count[4]++;
            }
        }
        count[2] = count[2] / 2;
        count[3] = count[3] / 2;
        int ans = *min_element(count.begin(),count.end());
        return ans;
    }
};