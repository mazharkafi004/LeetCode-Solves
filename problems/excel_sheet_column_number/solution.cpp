class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n = columnTitle.size();
        int ans = 0, c = n-1;
        for(int i=0;i<n;i++){
            int a = (columnTitle[i] - 'A') + 1;          
            ans+= a * pow(26,c);
            c--;
        }
        
        return ans;
    }
};