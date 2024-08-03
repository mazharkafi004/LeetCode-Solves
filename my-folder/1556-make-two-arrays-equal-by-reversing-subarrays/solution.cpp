class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
     unordered_map<int,int> mp;
     int n = target.size();
     for(int i=0;i<n;i++){
        mp[arr[i]]++;
     }
     for(int i=0;i<n;i++){
        if(!(mp.find(target[i]) != mp.end())){
            return false;
        }
        else{
            mp[target[i]]--;
            if (mp[target[i]] == 0) {
                mp.erase(target[i]);
            }
        }
     }  
     return true; 
    }

};
