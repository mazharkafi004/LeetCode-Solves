class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>left;
        vector<int>piv;
        vector<int>right;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else if(nums[i]==pivot){
                piv.push_back(nums[i]);
            }
            else{
                right.push_back(nums[i]);
            }
        }
        left.insert(left.end(), piv.begin(), piv.end());
        left.insert(left.end(), right.begin(), right.end());
        return left;
    }
};
