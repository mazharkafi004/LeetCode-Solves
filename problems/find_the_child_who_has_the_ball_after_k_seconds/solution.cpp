class Solution {
public:
    int numberOfChild(int n, int k) {
        int t = k/(n-1);
        int m = k%(n-1);
        if(t%2){
            return (n-1)-m;
        }
        else{
            return m;
        }
    }
};