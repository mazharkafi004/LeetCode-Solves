class Solution {
public:
    int countOdds(int low, int high) {
        int dif = high-low;
        bool ck = low%2 + high % 2;
        return (dif/2)  + (int) ck;
    }
};