class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        vector<string>vec;
        string t;
        for(int i=0;i<n;i++){
            if(s[i]==' '){
                if(t.length()>0){
                  vec.push_back(t);
                  t = "";
                }
            }
            else{
                t+=s[i];
            }
        }
        if(!t.empty()){
            vec.push_back(t);
        }
        string ans;
        for(int i=vec.size()-1;i>0;i--){
            ans+=vec[i];
            ans+=" ";
        }
        ans+=vec[0];
        return ans;
    }
};