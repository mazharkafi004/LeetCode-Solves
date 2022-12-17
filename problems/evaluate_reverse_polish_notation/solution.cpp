class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>st;
        for(auto m : tokens) {
            if(m=="+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(a+b);
            }
            else if(m=="-"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b-a);
            }
            else if(m=="*"){
                long long a = st.top();
                st.pop();
                long long b = st.top();
                st.pop();
                st.push(a*b);
            }
            else if(m=="/"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                st.push(b/a);
            }
            else{
                st.push(stoi(m));
            }
        }
        return st.top();
    }
};