class Solution
{
public:
    bool isValid(string s)
    {
        if(s.length() %2 != 0) {
            return false;
        }
        stack<char> t;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                t.push(s[i]);
            }
            else
            {
                if (t.empty())
                {
                    return false;
                }
                else
                {
                    if (s[i] == ')' && t.top() != '(')
                    {
                        return false;
                    }
                    if (s[i] == '}' && t.top() != '{')
                    {
                        return false;
                    }
                    if (s[i] == ']' && t.top() != '[')
                    {
                        return false;
                    }
                    t.pop();
                }
            }
           
        }
         return t.empty();
    }
};