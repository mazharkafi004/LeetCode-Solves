class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int pos = 0;
        string s = "";
        while(pos<word1.length() || pos<word2.length()){
            if(pos<word1.length()){
                s+=word1[pos];
            }
             if(pos<word2.length()){
                s+=word2[pos];
            }
            pos++;
      }
      return s;  
      }
};

