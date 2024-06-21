class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        unordered_map<int,int>mp;
        long long count = 0;
        for(int i=0;i<time.size();i++){
          int hr = time[i] % 60;
          int chk = abs(60-hr)%60;
          if(mp.find(chk) != mp.end()){
            count+=mp[chk];
          }
         mp[hr]++;
          
        }
        return count;
    }
};