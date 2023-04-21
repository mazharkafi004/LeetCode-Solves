class Solution {
public:
    bool isPalindrome(string s) {
        string t;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(isalpha(s[i])){
                t+=tolower(s[i]);
            }
            else if(isdigit(s[i])){
                t+=s[i];
            }
        }
        int m = t.size();
        if(m==0){
            return true;
        }
        for(int i=0;i<m/2;i++){
            if(t[i]!=t[m-i-1]){
                return false;
            }
        }
        return true;
    }
};