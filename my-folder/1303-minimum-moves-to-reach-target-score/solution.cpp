class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int step = 0;
        while(maxDoubles && target > 1){
            if(target%2){
                step++;
            }
            target/= 2;
            maxDoubles--;
            step++;
            if(target == 1){
                return step;
            }
        }
        return (target-1)+step;
    }
};
