class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int n = s.size(), count = 0, odd = 1;
        for(int i = 0 ; i < n; i++){
            mp[s[i]]++;
        }
        for(auto ch : mp){
            if(ch.second%2){
                if(odd==1){
                    count+=ch.second;
                    odd--;
                }
                else{
                    count+=ch.second - 1;
                }
            }
            else{
                count+=ch.second;
                 
            }
        }
        return count;
    }
};
