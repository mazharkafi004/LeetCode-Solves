class MyStack {
    public:
    queue<int> que;

     MyStack() {
        
    }
    
     void push(int x) {
        que.push(x);    
    }
    
     int pop() {
        
        for(int i=0;i<que.size()-1;i++){
          int top = que.front();
          que.pop();
          que.push(top);
        }
          int top = que.front();
          que.pop();
          return top;

    }
    
     int top() {
        return que.back();
    }
    
     bool empty() {
        return que.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
