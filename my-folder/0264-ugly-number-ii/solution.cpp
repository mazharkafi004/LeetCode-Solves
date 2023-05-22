class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int>ans(n,1);
        int two = 2, three = 3, five = 5, cur = 1, pos2=0, pos3 = 0, pos5 = 0;
        for(int i=1;i<n;i++){
           cur = min(two,min(three,five));
            ans[i] = cur;
            if(cur == two){
                pos2++;
                two = ans[pos2]*2;
            }
            if(cur == three){
                pos3++;
                three = ans[pos3]*3;
            }
            if(cur == five){
                pos5++;
                five = ans[pos5]*5;
            }
        }
        return cur;

    }
};
