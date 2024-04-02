class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char,char>s_map,t_map;
        for(int i=0;i<n;i++){
            char s_i = s[i];
            char t_i = t[i];
            if(s_map.count(s_i)==0 && t_map.count(t_i)==0){
                s_map[s_i] = t_i;
                t_map[t_i] = s_i;
            }
            else{
                if(s_map[s_i] != t_i || t_map[t_i]!=s_i){
                    return false;
                }
            }
            
        }
        return true;
    }
};