class Solution {
public:
    int totalMoney(int n) {
        int total_week = n / 7;
        int total_money = 0;
        for(int i=0;i<total_week;i++){
            total_money+=28+(7*i);
        }
        int total_rest_day = (n % 7);
        for(int i=total_week + 1;i<total_week + 1 + total_rest_day;i++){
            total_money+=(i);
        }

        return total_money;        
    }
};
