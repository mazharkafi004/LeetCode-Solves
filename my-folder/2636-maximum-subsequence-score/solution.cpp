class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        long long curSum = 0, ans = 0;
        vector<pair<int,int>>pr;
        priority_queue<int, vector<int>,greater<int>>pq;
        for(int i=0;i<n;i++){
            pr.push_back({nums2[i],nums1[i]});
        }
        sort(pr.begin(), pr.end(), greater<pair<int, int>>());
        for(int i=0;i<k;i++){
            pq.push(pr[i].second);
            curSum+=pr[i].second;
        }
        ans = max(ans,curSum*pr[k-1].first);
        for(int i=k;i<n;i++){
            int min = pq.top();
            pq.pop();
            curSum-=min;
            pq.push(pr[i].second);
            curSum+=pr[i].second;
            ans = max(ans,curSum*pr[i].first);
        }
        return ans;
    }
};
