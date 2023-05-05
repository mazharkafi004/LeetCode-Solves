class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> numsCounter1(nums1.begin(),nums1.end());
        unordered_set<int> numsCounter2(nums2.begin(),nums2.end());
        for(int j=0;j<nums2.size();j++){
            if(numsCounter1.count(nums2[j]) > 0){
                numsCounter1.erase(nums2[j]);
                j--;
            }
        }
        for(int j=0;j<nums1.size();j++){
            if(numsCounter2.count(nums1[j]) > 0){
                numsCounter2.erase(nums1[j]);
                j--;
            }
        }
        vector<int> distinct1(numsCounter1.begin(),numsCounter1.end()),distinct2(numsCounter2.begin(),numsCounter2.end());

        return {distinct1,distinct2};
    }
};
