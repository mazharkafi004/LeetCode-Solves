class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int sum = 0, count = 0, n = arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum == ((i)*(i+1))/2){
                count++;
            }
        }
        return count;
    }
};
