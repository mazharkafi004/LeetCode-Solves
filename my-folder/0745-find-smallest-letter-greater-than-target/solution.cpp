class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        char a;
        int count = 0;
        int check = target - 'a';
        for (int i = 0; i < letters.size(); i++)
        {
            int value = (letters[i] - 'a');
            if (value > check)
            {
                count++;
                a = letters[i];
                break;
            }
        }
        if (count == 0)
        {
            a = letters[0];
        }
        return a;
    }
};
