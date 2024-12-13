class Solution {
public:
    long long findScore(vector<int>& nums) {
        long long score = 0;
        vector<pair<int, int>> indexedNums;

        for (int i = 0; i < nums.size(); ++i) {
            indexedNums.emplace_back(nums[i], i + 1);
        }

        sort(indexedNums.begin(), indexedNums.end());

        vector<int> visited(nums.size() + 1, 0);

        for (const auto& [value, index] : indexedNums) {
            if (visited[index]) continue;
            score += value;
            visited[index] = 1;  
            if (index > 1) visited[index - 1] = 1; 
            if (index < nums.size()) visited[index + 1] = 1; 
        }

        return score;
    }
};

