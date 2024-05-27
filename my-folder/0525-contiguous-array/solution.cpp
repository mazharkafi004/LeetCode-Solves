class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        int sum = 0, subArray = 0;
        for(int i=0;i<nums.size();i++){
            sum+= nums[i] ? 1 : -1;
            if(sum==0){
                subArray = i+1;
            }
            else if(mp.find(sum) != mp.end()){
                subArray = max(subArray,i-mp[sum]);
            }
            else{
                mp[sum] = i;
            }
        }
        return subArray;
    }
};
