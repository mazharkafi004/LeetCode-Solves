class Solution {
public:
double calculateProfit(double pass, double total) {
    return (pass + 1) / (total + 1) - pass / total;
}

double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
    priority_queue<pair<double, pair<int, int>>> maxHeap;
    double totalRatio = 0;
    
    for (const auto& cls : classes) {
        double pass = cls[0], total = cls[1];
        totalRatio += pass / total;
        maxHeap.push({calculateProfit(pass, total), {pass, total}});
    }

    while (extraStudents--) {
        auto [profit, cls] = maxHeap.top(); maxHeap.pop();
        double pass = cls.first, total = cls.second;
        totalRatio += profit;
        maxHeap.push({calculateProfit(pass + 1, total + 1), {pass + 1, total + 1}});
    }

    return totalRatio / classes.size();
}
};
