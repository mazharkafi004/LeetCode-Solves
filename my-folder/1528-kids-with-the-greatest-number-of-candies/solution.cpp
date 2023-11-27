class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = 0;
        for (int x: candies){
            if(x>mx){
                mx = x;
            }
        }
        vector<bool>result(candies.size(),false);
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=mx){
                result[i] = true;
            }
        }
        return result;
    }
};
