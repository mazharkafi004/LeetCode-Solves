class Solution {
public:
    int passThePillow(int n, int time) {
        n = n - 1;
        int pass = time/n;
        int serial = time%n;
        if(pass%2==0){
            return serial + 1;
        }
        else{
            return n-serial + 1;
        }
    }
};
