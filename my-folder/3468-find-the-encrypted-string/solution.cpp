class Solution {
public:
    string getEncryptedString(string s, int k) {
        int n = s.size();
        string t;
        for(int i=0;i<n;i++){
            t+= s[(i+k)%n];
        }
        return t;
    }
};
