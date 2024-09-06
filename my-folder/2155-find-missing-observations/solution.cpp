class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m = rolls.size();
        int given_sum = 0;
        for(int i=0;i<m;i++){
            given_sum+=rolls[i];
        }
        int total_sum = mean*(n+m);
        int remaining_sum = total_sum - given_sum;
        int base_number = remaining_sum/n;
        int increment = remaining_sum % n;
        if((base_number > 6 || base_number < 1) || (base_number==6 && increment)){
            return {};
        }
        vector<int>missingNumbers;
        for(int i=0;i<n;i++){
            missingNumbers.push_back(base_number);
            if(increment){
                missingNumbers[i]++;
                increment--;
            }
        }
        return missingNumbers;
    }
};
