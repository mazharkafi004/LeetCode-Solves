class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        unordered_map<int,int>mp;
        long long count = 0;
        for(int i=0;i<hours.size();i++){
          int hr = hours[i] % 24;
          int chk = abs(24-hr)%24;
          if(mp.find(chk) != mp.end()){
            count+=mp[chk];
          }
         mp[hr]++;
          
        }
        return count;
    }
};