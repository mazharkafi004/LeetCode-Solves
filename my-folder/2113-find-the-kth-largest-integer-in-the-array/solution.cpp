class Solution {
public:
    static bool sortString(const string &s,const string &t){
      if(s.size()!=t.size()){
       return (s.size()>t.size());
      }
      return (s>t); 
    }
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(),nums.end(),sortString);
        return nums[k-1];
    }
};
