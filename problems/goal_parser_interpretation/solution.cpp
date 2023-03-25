class Solution
{
public:
    string interpret(string command)
    {
        string s;
        int n = command.length();
        for (int i = 0; i < n ; i++)
        {
            if (command[i] == 'G')
            {
                s += 'G';
            }
            else if (command[i] == '(')
            {
                if (command[i + 1] == ')')
                {
                    s += 'o';
                    i++;
                }
                else if (command[i + 1] == 'a')
                {
                    s += 'a';
                    s += 'l';
                    i = i + 3;
                }
            }
        }
        return s;
    }
};