class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        double  result = INT_MAX, avg = 0;
        int l = 0, r = n-1;
        while(l<r){
            avg = (nums[l] + nums[r])/(2*1.0);
            result = min(avg,result);
            // cout<<result<<endl;
            l++;
            r--;
        }
        return result;
    }
};