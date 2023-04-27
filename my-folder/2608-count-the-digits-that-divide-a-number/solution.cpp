class Solution {
public:
    int countDigits(int num) {
        vector<int>digit;
        int number = num;
        int count = 0;
        while(num>0){
            digit.push_back(num%10);
            num/=10;
        }
        int n = digit.size();
        for(int i=0;i<n;i++){
            if(number%digit[i]==0){
                count++;
            }
        }
        return count;
    }
};
