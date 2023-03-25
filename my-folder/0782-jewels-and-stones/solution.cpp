class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int> store;
        int n = jewels.size();
        for(int i=0;i<n;i++){
            store[jewels[i]]++;
        }
        int count = 0;
        int m = stones.size();
        for(int i=0;i<m;i++){
            if(store.find(stones[i])!=store.end())
            {
                count++;
            }
        }
        return count;
    }
};
