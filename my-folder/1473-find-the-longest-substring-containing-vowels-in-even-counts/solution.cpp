class Solution {
public:
    int findTheLongestSubstring(string s) {

    vector<int> vowelMask(26, 0);
    vowelMask['a' - 'a'] = 1;  
    vowelMask['e' - 'a'] = 2;  
    vowelMask['i' - 'a'] = 4;  
    vowelMask['o' - 'a'] = 8;  
    vowelMask['u' - 'a'] = 16; 

    int mask = 0;  
    int res = 0;   
    
    
    vector<int> firstOccurrence(32, -1);
    firstOccurrence[0] = 0;  

    for (int i = 0; i < s.size(); ++i) {
 
        mask ^= vowelMask[s[i] - 'a'];

        if (firstOccurrence[mask] == -1) {
            firstOccurrence[mask] = i + 1;
        } else {
            res = max(res, i + 1 - firstOccurrence[mask]);
        }
    }

    return res;
}

};
