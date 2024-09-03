class Solution {
public:
    int getLucky(string s, int k) {
        int n = s.size();
        int sum = 0;
        string temp = "";
        for(char c: s){
            temp += to_string(c - 'a' + 1);
        }
        while(k--){
            int t = temp.size();
            sum = 0;
            for(int i=0;i<t;i++){
                sum+=temp[i]-'0';
            }
            temp = to_string(sum);
        }
        return sum;
    }
};
