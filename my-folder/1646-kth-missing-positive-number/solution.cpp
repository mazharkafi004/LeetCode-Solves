class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i=1,j=0,r=0,n = arr.size();
        while(j<n){
          if(i!=arr[j]){
              r++;
              if(r==k){
                  return i;
              }
              i++;
          }
          else{
              i++;
              j++;
          }
        }
        return arr[n-1]+abs(k-r);
    }
};
