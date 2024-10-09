class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.size();
        stack<char>st;
        int count = 0;
        for(int i=0;i<n;i++){
            if(!st.empty()){
                char top = st.top();
                if(s[i]==')' && top=='('){
                    st.pop();
                }
                else if(s[i]==')' && top==')'){
                    count++;
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                st.push(s[i]);
            }
            
        }
        return st.size()+count;
    }
};
