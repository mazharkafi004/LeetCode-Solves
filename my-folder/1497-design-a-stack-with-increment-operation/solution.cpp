class CustomStack {
public:
    vector<int>vec;
    int mx  = 0;
    CustomStack(int maxSize) {
        mx = maxSize;
    }
    
    void push(int x) {
        if(vec.size()<mx){
            vec.push_back(x);
        }
    }
    
    int pop() {
        if(!vec.empty()){
            int top = vec.back();
            vec.pop_back();
            return top;
        }
        return -1;

    }
    
    void increment(int k, int val) {
        int len = vec.size();
        int n = min(len,k);
        for(int i=0;i<n;i++){
            vec[i] = vec[i]+val; 
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
