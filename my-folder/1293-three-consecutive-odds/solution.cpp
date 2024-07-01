class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int num1,num2,num3;
        int n = arr.size();
        if(n<3){
            return false;
        }
        for(int i=0;i<n-2;i++){
            num1 = arr[i]%2;
            num2 = arr[i+1]%2;
            num3 = arr[i+2]%2;
            if(num1 && num2 && num3){
                return true;
            }
        }
        return false;
    }
};
