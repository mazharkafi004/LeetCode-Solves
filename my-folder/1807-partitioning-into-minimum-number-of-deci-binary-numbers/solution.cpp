class Solution {
public:
    int minPartitions(string n) {
        int mx = 0;
        for (int i=0;i<n.size();i++){
            if(mx==9){
                return 9;
            }
            if(n[i]-'0'>mx){
                mx = n[i] - '0';
            }
        }
        return mx;
    }
};
