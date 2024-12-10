class Solution {
public:
bool isSpecial(string substring) {
    for (char c : substring) {
        if (c != substring[0]) {
            return false;
        }
    }
    return true;
}


int maximumLength(string s) {
    int n = s.length();
    int maxLength = -1; 
    for (int length = n; length > 0; --length) {
        unordered_map<string, int> freqMap; 

        for (int i = 0; i <= n - length; ++i) {
            string substring = s.substr(i, length);
            if (isSpecial(substring)) {
                freqMap[substring]++;
            }
        }
        for (const auto& entry : freqMap) {
            if (entry.second >= 3) {
                return length; 
            }
        }
    }

    return maxLength; 
}
};
