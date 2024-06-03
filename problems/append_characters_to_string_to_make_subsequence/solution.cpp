class Solution {
public:
    int appendCharacters(string s, string t) {
        int j = 0, k = 0, i = 0, a = s.size(), b = t.size();
        while(j<a && k<b){
            if(s[j]==t[k]){
                j++;
                k++;
            }
            else{
                j++;
            }
        }
        return b-k;
    }
};