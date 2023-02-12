class Solution {
public:
    int balancedStringSplit(string s) {
        int ans = 0; 
        int counter = 0,n = s.length();
        for(int i=0 ; i < n ; i++){
           if(s[i]=='L'){
               counter++;
           }
           else{
               counter--;
           }
           if(counter==0){
               ans++;
           }
        }
        return ans;
    }
};
