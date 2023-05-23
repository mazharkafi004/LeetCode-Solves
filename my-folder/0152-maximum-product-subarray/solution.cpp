class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minProduct = nums[0], maxProduct = nums[0], result = nums[0];
        int n = nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxProduct,minProduct);
            }
            minProduct = min(nums[i],minProduct*nums[i]);
            maxProduct = max(nums[i],maxProduct*nums[i]);
            result = max(maxProduct,result);
        }
        return result;

    }
};
