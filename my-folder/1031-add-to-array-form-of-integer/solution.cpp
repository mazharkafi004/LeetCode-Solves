class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans ;
        reverse(num.begin(),num.end());
        int carry = 0;
        for(int i=0;i<num.size();i++){
             int a = num[i]+ (k%10) + carry;
             if(a>9){
                 carry = 1;
             }
             else{
                 carry = 0;
             }
             ans.push_back(a%10);
             k = k/10;
            
        }
        
        if(k!=0){
            while(k!=0){
                int a = carry + k%10;
                if(a>9){
                    carry = 1;
                }
                else{
                    carry = 0;
                }
                ans.push_back(a%10);
                k = k/10;
            }
        }
        if(carry!=0){
          
            ans.push_back(carry);
            }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
