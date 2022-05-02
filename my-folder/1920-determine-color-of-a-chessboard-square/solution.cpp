class Solution
{
public:
    bool squareIsWhite(string coordinates)
    {
        int sum = 0;
        sum += coordinates[0] - 97;
        sum += coordinates[1] - '0';

        if (sum % 2 == 1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};
