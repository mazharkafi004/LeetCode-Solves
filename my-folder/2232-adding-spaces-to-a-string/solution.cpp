class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
    string result = "";
    int j=0;
    for (int i = 0; i < s.length(); i++) {
        if(j<spaces.size() && spaces[j] == i) {
            result += ' ';
            j++;
        }
    result += s[i];
    }
    return result;
    }
};
