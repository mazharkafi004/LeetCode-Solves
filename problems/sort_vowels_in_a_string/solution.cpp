class Solution {
public:
    string sortVowels(string s) {
        int n = s.size(),cnt = 0;
        string t;
        for(int i=0;i<n;i++){
           char a = tolower(s[i]);
           if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
               t+=s[i];
               s[i] = '1';
           }
        }
        sort(t.begin(),t.end());
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                s[i] = t[cnt];
                cnt++;
            }
        }
        return s;
    }
};