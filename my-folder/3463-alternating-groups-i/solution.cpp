class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int count = 0, n = colors.size(), prev, current  , next;
        for(int i = 0; i < n; i++) {
            prev = colors[(i - 1 + n) % n]; 
            current = colors[i];
            next = colors[(i + 1) % n];     

            if (current != prev && current != next) {
                count++;
            }
        }
        return count;
    }
};
