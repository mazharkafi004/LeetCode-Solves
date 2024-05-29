class Solution {
public:
    int numSteps(string s) {
        int pos = s.size()-1, cnt = 0, carry = 0;
        while(pos >= 1){
            if(s[pos]=='0' && carry == 0){
                cnt++;
            }
            else if(s[pos] == '1' && carry == 1){
                carry = 1;
                cnt++;
            }
            else{
                cnt+=2;
                carry = 1;
            }
            pos--;
        }
        if(carry==1){
            cnt++;
        }
        return cnt;
    }
};
