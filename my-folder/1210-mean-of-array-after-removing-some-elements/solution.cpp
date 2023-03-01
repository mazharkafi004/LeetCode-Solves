class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size(), s = (n*5)/100;
        int sum = 0;
        for (int i = s; i<n-s;i++){
           sum+= arr[i];
        }
        return (sum*1.0)/(n-(2*s));
    }
};
