class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        int n = s.size(), i = 0;
        while(i<n){
            if(!st.empty()){
                char top = st.top();
                if(s[i]=='B' && top=='A'){
                    st.pop();
                }
                else if(s[i]=='D' && top=='C'){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
            else{
                    st.push(s[i]);
            }
            i++;
        }
        return st.size();
    }
};
