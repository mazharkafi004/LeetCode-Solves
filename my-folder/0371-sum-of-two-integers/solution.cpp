class Solution {
public:
    int getSum(int a, int b) {
        int ans;
       int carry;
        while(carry!=0){
            ans = a&b;
            a = a^b;
            b = (unsigned int)ans<<1;
            carry = b;
        }
        return a;
    }
};
