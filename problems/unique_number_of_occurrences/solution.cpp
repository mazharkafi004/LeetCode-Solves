class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> check;
        map<int,int> occur;
        for(auto i:arr){
            occur[i]++;
        }
        for(auto it:occur){
            if(check.count(it.second)){
                return false;
            }
            else{
                check.insert(it.second);
            }
        }
        return true;
    }
};