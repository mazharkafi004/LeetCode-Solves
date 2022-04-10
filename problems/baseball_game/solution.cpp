class Solution
{
public:
    int calPoints(vector<string> &ops)
    {
        vector<int> p;
        for (int i = 0; i < ops.size(); i++)
        {
            if (ops[i] == "C")
            {
                p.erase(p.end() - 1);
            }
            else if (ops[i] == "D")
            {

                p.push_back(p[p.size() - 1] * 2);
            }
            else if (ops[i] == "+")
            {

                p.push_back((p[p.size() - 1]) + p[p.size() - 2]);
            }
            else
            {

                p.push_back(stoi(ops[i]));
            }
        }
        int sum = 0;
        for (int i = 0; i < p.size(); i++)
        {
            sum += p[i];
        }
        return sum;
    }
};