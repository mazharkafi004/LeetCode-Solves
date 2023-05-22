class Solution {
public:
    int maxProduct(vector<int>& nums) {
       priority_queue<int> pq;
       int n = nums.size();
       for(int i=0;i<n;i++){
           pq.push(nums[i]);
       }
       int cnt = 2, ans = 1;
       while(cnt>0){
            int element = pq.top();
            pq.pop();
            cnt--;
            ans*=(element-1);
       } 
       return ans;
    }
};
