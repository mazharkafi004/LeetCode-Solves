class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int pos = 0;
       int totalGas = 0, totalCost = 0, curGas=0;
       for(int i=0;i<gas.size();i++){
           totalGas+=gas[i];
           totalCost+=cost[i];
           curGas+=gas[i]-cost[i];
           if(curGas<0){
               pos = i+1;
               curGas = 0;
           }
       }
       if(totalGas<totalCost){
           return -1;
       }
       return pos;
    }
};