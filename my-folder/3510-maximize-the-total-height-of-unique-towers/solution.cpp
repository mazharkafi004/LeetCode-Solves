class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        long long result = 0, processedTowers = 0;
        sort(maximumHeight.rbegin(), maximumHeight.rend()); 
        int nextAvailableHeight = INT_MAX;
        unordered_set<int>assignedHeights;
        for (int maxHeight : maximumHeight) {
            int heightToAssign = min(maxHeight, nextAvailableHeight);
            if (heightToAssign > 0 && assignedHeights.find(heightToAssign) == assignedHeights.end()) {
                assignedHeights.insert(heightToAssign);  
                result += heightToAssign;  
                nextAvailableHeight = heightToAssign - 1;
            } else {
                while (heightToAssign > 0 && assignedHeights.find(heightToAssign) != assignedHeights.end()) {
                    heightToAssign--;
                }
                if (heightToAssign > 0) {
                    assignedHeights.insert(heightToAssign);
                    result += heightToAssign;
                    nextAvailableHeight = heightToAssign - 1;
                } else {
                    return -1; 
                }
            }
        }
        return result;
    }
};
