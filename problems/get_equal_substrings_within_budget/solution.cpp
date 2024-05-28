class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l = 0, r = 0, n = s.size(), count = 0, result = 0;
        while(r < n){
            count+=abs((s[r])-(t[r]));
            while(count>maxCost){
                count-= abs((s[l])-(t[l]));
                l++;
            }
            result = max(result, r-l+1);
            r++;
        }
        return result;
    }
};