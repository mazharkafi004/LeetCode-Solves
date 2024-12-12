class Solution {
public:

    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        int n = gifts.size();
        for(int i=0;i<n;i++){
            pq.push(gifts[i]);
        }
        long long rem = 0;
        while(k--){
            long long mx = pq.top();
            pq.pop();
            long long sqr = sqrt(mx);
            pq.push(sqr);
        }
        while(!pq.empty()){
            long long mx = pq.top();
            pq.pop();
            rem+=mx;
        }
        return rem;
    }
};
