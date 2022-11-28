class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       unordered_map<int,int> freq;
       int sum=0,count=0;
        freq[sum] = 1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            if(freq.find(sum-k)!= freq.end()){
                count+=freq[sum-k];
            }
            freq[sum]++;
        }
        return count;
    }
};
