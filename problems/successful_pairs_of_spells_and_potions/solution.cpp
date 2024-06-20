class Solution {
public:
   int binarySearch(vector<int>& potions, int& spell, long long success,int n){
        int l = 0, r = n-1, index = n; 
        while(l<=r){
            int mid = (r-l)/2+l;
            long long prod = (long long)spell*potions[mid];
            if(prod>=success){
                index = mid;
                r = mid-1;
            }
            else{
               l = mid+1 ; 
            }
        }
        return n-index;
   }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(),potions.end());
        int n = potions.size(), m = spells.size();
        vector<int>ans(m);
        for(int i=0;i<m;i++){
            ans[i] = binarySearch(potions,spells[i],success,n);
        }
        return ans;
    }
};