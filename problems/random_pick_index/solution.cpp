class Solution {
public:
int n;
vector<int>num;
    Solution(vector<int>& nums) {
         n = nums.size();
         num = nums;
    }
    
    int pick(int target) {
        vector<int>pos;
        
        for(int i=0;i<n;i++){
            if(num[i]==target){
                pos.push_back(i);
            }
        }
        int t = pos.size();
        return pos[rand()%t];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */