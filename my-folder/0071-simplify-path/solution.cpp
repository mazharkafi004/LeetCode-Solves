class Solution
{
public:
    string simplifyPath(string path)
    {
        stack<string> cannon_path;
        string ans;

        for (int i = 0; i < path.size(); ++i)
        {
            if (path[i] == '/')
            {
                continue;
            }
            string temp;

            while (i < path.size() && path[i] != '/')
            {

                temp += path[i];
                ++i;
            }
            if (temp == ".")
            {
                continue;
            }

            else if (temp == "..")
            {
                if (!cannon_path.empty())
                    cannon_path.pop();
            }
            else
            {

                cannon_path.push(temp);
            }
        }

        while (!cannon_path.empty())
        {
            ans = "/" + cannon_path.top() + ans;
            cannon_path.pop();
        }

        if (ans.size() == 0)
        {
            return "/";
        }

        return ans;
    }
};
