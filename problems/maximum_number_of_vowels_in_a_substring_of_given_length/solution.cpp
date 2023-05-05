class Solution {
public:
    int maxVowels(string s, int k) {
        int ans = 0, count = 0, n = s.size();
        int l = 0, r = 0;
        while(r<n){
            if((r-l+1)<k){
                if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u'){
                  count++;
                }
                r++;
            }
            else if((r-l+1)==k){
                if(s[r]=='a' || s[r]=='e' || s[r]=='i' || s[r]=='o' || s[r]=='u'){
                  count++;
                }
                if(count==k){
                return k;
                }
                if(count>ans){
                  ans = count;
                }
                if(s[l]=='a' || s[l]=='e' || s[l]=='i' || s[l]=='o' || s[l]=='u'){
                  count--;
                }
                l++;
                r++;
            }
        }
        return ans;
    }
};