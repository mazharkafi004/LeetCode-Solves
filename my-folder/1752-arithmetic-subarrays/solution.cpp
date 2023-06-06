class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr,int l, int r)
    {   vector<int> temp(arr.begin() + l, arr.begin() + r + 1);
        sort(temp.begin(),temp.end());
        int a = temp[1] - temp[0];
        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i] - temp[i - 1] != a)
            {
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int n = nums.size(),m = l.size();
        vector<bool> ans;
        for(int i=0;i<m;i++){
            bool temp = canMakeArithmeticProgression(nums,l[i],r[i]);
            ans.push_back(temp);
        }
        return ans;
    }
};
