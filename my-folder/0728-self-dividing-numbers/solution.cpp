class Solution {
public:
    bool countDigits(int num) {
        vector<int>digit;
        int number = num;
        int count = 0;
        while(num>0){
            if(num%10==0){
                return false;
            }
            digit.push_back(num%10);
            num/=10;
        }
        int n = digit.size();
        for(int i=0;i<n;i++){
            if(number%digit[i]==0){
                count++;
            }
        }
        if(count==n){
            return true;
        }
        return false;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            if(countDigits(i)==true){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
