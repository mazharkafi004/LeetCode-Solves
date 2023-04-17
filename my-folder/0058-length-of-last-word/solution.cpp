class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0, count = 0, n = s.size();
        for(int i=0;i<n;i++){
            if (!isspace(s[i])){
                count++;
            }
            else{
                if(count!=0){
                ans = count;
                count = 0;
                }

            }
             if(i==n-1){
                if(count!=0){
                ans = count;
                }
            }
        }
        return ans;
    }
};
