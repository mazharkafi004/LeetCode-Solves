class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum^=nums[i];        
        }
        int setBit = sum & -(unsigned int)(sum);
        int a = 0, b = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] & setBit){
                a^=nums[i];
            }
            else{
                b^=nums[i];
            }
        }
        return {a,b};}
};