class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
       int n = arr.size();
       int sum = 0;
       for(int i=0;i<n;i++){
           for(int j=i+2;j<n;j+=2){
               for (int k=i;k<=j;k++){
                   sum+=arr[k];
               }
           }
       } 
       for(int i=0;i<n;i++){
           sum+=arr[i];
       }
       return sum;
    }
};
