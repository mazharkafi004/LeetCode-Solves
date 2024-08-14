class Solution {
public:
    int smallestDistancePair(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>distancePair;
        for(int i = 0; i<n;i++){
            for(int j = i+1;j<n;j++){
                distancePair.push_back(abs(nums[i]-nums[j]));
            }
        }
        nth_element(distancePair.begin(), distancePair.begin() + (k-1), distancePair.end());
        return distancePair[k-1];

    }
};
