class Solution {
public:
    int maximumGain(string s, int x, int y) {
    stack<char>st;
    int ans = 0;
    string mx_string,min_string;
    if(y>x){
        mx_string = "ba";
        min_string = "ab";
        swap(x,y);
    }
    else{
        mx_string = "ab";
        min_string = "ba";
    }
    for(int i=0;i<s.size();i++){
      if(s[i]==mx_string[1] && (!st.empty() && st.top()==mx_string[0])){
        ans+=x;
        st.pop();
      }
      else{
        st.push(s[i]);
      }
    }
    string str = "";
    while(!st.empty()){
       str+=st.top();
       st.pop();
    }
    reverse(str.begin(),str.end());
    for(int i=0;i<str.size();i++){
       if(str[i]==min_string[1] && (!st.empty() && st.top()==min_string[0])){
        ans+=y;
        st.pop();
      }
      else{
        st.push(str[i]);
      }       
    }
    return ans;
    }
};
