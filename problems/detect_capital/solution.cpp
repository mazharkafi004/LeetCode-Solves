class Solution {
public:
    bool detectCapitalUse(string word) {
        int cap = 0, low = 0, n = word.size();
        bool flag  = false;
        if(word[0]>='A' && word[0]<='Z') {
                flag = true;;
        }
        for(int i=0;i<n;i++){
            if(word[i]>='A' && word[i]<='Z') {
                cap++;
            }
            else if (word[i]>='a' && word[i]<='z') {
                low++;
            }
        }
        if(cap == n || low == n){
            return true;
        }
        else if(flag && low == n-1) {
            return true;
        }
        else{
            return false;
        }
    }
};