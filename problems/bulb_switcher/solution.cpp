class Solution {
public:
    int bulbSwitch(int n) {
        int count = 0;
        for(int i=1;i<=n;i++){
            int r = sqrt(i);
            if(r*r == i){
                count++;
            }
        }
        return count;
    }
};