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
         if(s[i]=='}' && !t.empty() && t.top()=='{') {
             t.pop();
         }
         else if(s[i]==')' && !t.empty() && t.top()=='(') {
             t.pop();
         }
         else if(s[i]==']' && !t.empty() && t.top()=='[') {
             t.pop();
         }
         else{
             t.push(s[i]);
         }
        }
         return t.empty();
    }
};