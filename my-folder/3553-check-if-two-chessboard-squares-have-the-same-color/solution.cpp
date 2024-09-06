class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int first = coordinate1[0] - 'a' + coordinate1[1]-'0';
        int second = coordinate2[0] - 'a' + coordinate2[1]-'0';
        return (first%2 == second%2);
    }
};
