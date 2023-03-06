class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size(), r = n - 1, l=0, x = target;
        while(l<=r){
            int mid = (r-l)/2+l;
            if(nums[mid]==x){
                return mid;
            }
            else if(nums[mid]>x){
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return l;
    }
};
