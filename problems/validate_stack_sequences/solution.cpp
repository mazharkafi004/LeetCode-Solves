class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        stack<int> ans;
        int pos = 0;
        for (int i = 0; i < pushed.size(); i++)
        {
            ans.push(pushed[i]);
            while (pos < popped.size() && ans.size() && ans.top() == popped[pos])
            {
                ans.pop();
                pos++;
            }
        }
        if (ans.empty())
        {
            return true;
        }
        while (pos < popped.size() && ans.size() && ans.top() == popped[pos++])
        {
            ans.pop();
        }
        if (!ans.empty())
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};