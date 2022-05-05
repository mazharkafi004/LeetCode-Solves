class MyStack
{
public:
    queue<int> queue;
    MyStack()
    {
    }

    void push(int x)
    {
        queue.push(x);
    }

    int pop()
    {
        for (int i = 0; i < queue.size() - 1; i++)
        {
            int a = queue.front();
            queue.pop();
            queue.push(a);
        }
        int b = queue.front();
        queue.pop();
        return b;
    }

    int top()
    {
        return queue.back();
    }

    bool empty()
    {
        return queue.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
