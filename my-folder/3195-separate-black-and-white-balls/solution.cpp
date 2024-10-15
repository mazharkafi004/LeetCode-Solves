class Solution {
public:
    long long minimumSteps(string s) {
        long long result = 0, one = 0;
        for(char num : s){
            if(num=='1'){
                one++;
            }
            else{
                result+=one;
            }
        }
        return result;
    }
};
