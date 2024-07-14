class Solution {
public:
    int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
        sort(horizontalCut.begin(), horizontalCut.end(), greater<int>());
        sort(verticalCut.begin(), verticalCut.end(), greater<int>());
        
        int i = 0, j = 0;
        int hCut = 1, vCut = 1;
        int totalCost = 0;
        
        while (i < horizontalCut.size() && j < verticalCut.size()) {
            if (horizontalCut[i] >= verticalCut[j]) {
                totalCost += horizontalCut[i] * vCut;
                hCut++;
                i++;
            } else {
                totalCost += verticalCut[j] * hCut;
                vCut++;
                j++;
            }
        }

        while (i < horizontalCut.size()) {
            totalCost += horizontalCut[i] * vCut;
            i++;
        }
        
        while (j < verticalCut.size()) {
            totalCost += verticalCut[j] * hCut;
            j++;
        }
        
        return totalCost;
    }
};
