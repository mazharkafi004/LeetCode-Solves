class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int> counter;
        int n = s.size(), count = 1;
        for(int i = 0; i < n ; i++){
            counter[s[i]]++;   
            if(counter[s[i]] == 2){
                count++;
                counter.clear();
                counter.insert({s[i],1});
            }
        }
        return count;
    }
};
