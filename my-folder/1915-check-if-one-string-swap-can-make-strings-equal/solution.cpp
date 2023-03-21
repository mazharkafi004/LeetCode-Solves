class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2){
            return true;
        }
        int count = 0, pos1 = 0, pos2 = 0, n = s1.size();
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                count++;
                if(count>2){
                    return false;
                }
                else if(count==1){
                    pos1 = i;
                }
                else{
                    pos2 = i;
                }
            }
        }
        swap(s1[pos1],s1[pos2]);
        if(s1==s2){
            return true;
        }
        return false;
    }
};
