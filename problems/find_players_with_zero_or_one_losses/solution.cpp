class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
       map <int,int> lose;
      
       for(auto m:matches){
           if(!lose.count(m[0])){
               lose[m[0]]=0;
           }
           lose[m[1]]++;
       }
        vector<int>zero,one;
        for(auto [i,j]: lose){
            if(j==0){
                zero.push_back(i);
            }
             if(j==1){
                one.push_back(i);
            }
        }
        return {zero,one};
    }
};