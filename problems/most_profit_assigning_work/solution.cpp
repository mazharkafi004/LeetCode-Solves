class Solution {
public:
int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
       vector< pair <int,int> > vec;
       for(int i=0;i<profit.size();i++){
        vec.push_back(make_pair(difficulty[i],profit[i]));
       }
       sort(vec.begin(),vec.end());
       sort(worker.begin(),worker.end());
       int maxProfit = 0, bestProfit = 0, index = 0;
       for(int i=0;i<worker.size();i++){
            while(index < vec.size() && worker[i]>= vec[index].first){
                bestProfit = max(bestProfit,vec[index].second);
                index++;
            }
            maxProfit+=bestProfit;
       }
       return maxProfit;
    }
};