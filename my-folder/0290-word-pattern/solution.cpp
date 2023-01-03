class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream st(s);
        string tm;
        vector<string>vs;
        while(st>>tm){
           vs.push_back(tm);
        } 
        if(pattern.size() != vs.size()){
            return false;
        }
        unordered_map<char,string> str;
        unordered_map<string,char> ch;
        for(int i=0;i<pattern.size();i++){
            if(str.find(pattern[i]) != str.end() && str[pattern[i]] != vs[i]){
                return false;
            }
            else if(ch.find(vs[i]) != ch.end() && ch[vs[i]] != pattern[i]){
                return false;
            }
            ch[vs[i]] = pattern[i];
            str[pattern[i]] = vs[i];
        }
        return true;
    }
};
