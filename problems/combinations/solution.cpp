class Solution {
public:
    void backtrack(vector<vector<int>>&arr, vector<int>&temp,int start,int n,int k){
        if(temp.size()==k){
            arr.push_back(temp);
            return;
        }
        for(int i=start;i<=n;i++){
            temp.push_back(i);
            backtrack(arr,temp,i+1,n,k);
            temp.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
      vector<vector<int>> ans;
      vector<int> temp;
      backtrack(ans,temp,1,n,k);
      return ans;
    }
};
