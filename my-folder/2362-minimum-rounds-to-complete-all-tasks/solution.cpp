class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> counter;
        for(auto task: tasks) {
            counter[task]++;
        }
        int count = 0;
        for(auto cnt: counter) {
            if(cnt.second == 1) {
                return -1;
            }
            else{
                if(cnt.second%3==0) {
                    count+=cnt.second/3;
                }
                else{
                    count+=(cnt.second/3) + 1;
                }
            }
        }
        return count;
    }
};
