class Solution {
public:
      int stoneGameII(vector<int>& piles) {
    int n = piles.size();
    
    // max value of M if game starts at piles[i] (i.e., 2*M <= (n-i)+1)
    auto maxM = [&](int i) { return (int)ceil((n-i)/2.); };
    
    // dp[i][m]: max stones one can get starting at piles[i] with M = m
    vector<vector<int>> dp(n+1, vector<int>(maxM(0)+1, 0));
    
    // build suffix sum of piles[i:]
    vector<int> suffixSum(n+1);
    suffixSum[0] = accumulate(piles.begin(), piles.end(), 0);
    for (int i = 1; i <= n; i++)
      suffixSum[i] = suffixSum[i-1] - piles[i-1];
    
    // DP
    for (int i = n-1; i >= 0; i--)
      for (int m = 1; m <= maxM(i); m++)
        for (int x = 1; x <= min(2*m, n-i); x++) {
          int ii = i+x; // opponent i
          int mm = min(max(m, x), maxM(ii)); // opponent m
          dp[i][m] = max(dp[i][m], suffixSum[i] - dp[ii][mm]);
        }
    
    return dp[0][1]; // start at first pile with M = 1
  }
};
