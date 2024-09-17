class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
       vector<string>result;
       unordered_map<string,int> mp;
       stringstream ss1(s1);
       string t1;
       while(ss1>>t1){
        mp[t1]++;
       }
       stringstream ss2(s2);
       string t2;
       while(ss2>>t2){
        mp[t2]++;
       }
       for(auto &m:mp){
        if(m.second==1){
            result.push_back(m.first);
        }
       }
       return result;  
    }
};
