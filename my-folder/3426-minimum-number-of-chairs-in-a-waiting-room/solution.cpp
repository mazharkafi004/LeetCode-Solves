class Solution {
public:
    int minimumChairs(string s) {
        int result = 0, count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                count++;
                result = max(count,result);
            }
            else{
                count--;
            }
        }
        return result;
    }
};
