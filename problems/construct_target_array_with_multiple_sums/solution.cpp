class Solution
{
public:
    bool isPossible(vector<int> &target)
    {
        priority_queue<int> counter;
        long long sum = 0;
        for (int i = 0; i < target.size(); i++)
        {
            sum += target[i];
            counter.push(target[i]);
        }

        while (counter.top() != 1)
        {
            sum -= counter.top();
            if (sum == 0 || sum >= counter.top())
            {
                return false;
            }
            int prev = counter.top() % sum;
            if (sum != 1 && prev == 0)
            {
                return false;
            }
            counter.pop();
            counter.push(prev);
            sum += prev;
        }
        return true;
    }
};