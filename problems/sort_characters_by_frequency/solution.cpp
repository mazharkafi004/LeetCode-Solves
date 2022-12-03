class Solution {
public:
    string frequencySort(string s) {
        map<char,int> freq;
        priority_queue<pair<int,char>>pq;
        string ans = "";
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto i:freq){
          pq.push({i.second,i.first});
        }
        while(!pq.empty()){
            int a = pq.top().first;
            while(a--){
                ans+=pq.top().second;
            }
            pq.pop();
        }
        return ans;
    }
};