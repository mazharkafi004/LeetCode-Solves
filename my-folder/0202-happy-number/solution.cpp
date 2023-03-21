class Solution {
public:
    bool isHappy(int n) {
        while(n>9){
            int product = 0;
            int b = n;
             while(b>0){
                 int a = b%10; 
                 product += a*a;
                 b/=10;
             }
             n = product;
        }
        if(n==1 || n==7){
            return true;
        }
        return false;
    }
};
