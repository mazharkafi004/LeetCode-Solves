class Solution {
public:
    int kthFactor(int n, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=1;i<=sqrt(n);i++){
            if(n%i==0){
                pq.push(i);
                if (i != (n / i)) {
                  pq.push(n / i);
                }
            }
        }
        if(pq.size()<k){
            return -1;
        }
        while (k > 1) {
        pq.pop();
        k--;
        }
        return pq.top();
    }
};
