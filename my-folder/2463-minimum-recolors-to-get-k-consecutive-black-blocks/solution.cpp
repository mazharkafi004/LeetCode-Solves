class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int l = 0, r = 0, n = blocks.size(),count = 0, mn = INT_MAX;
        while(r<n){
            if(blocks[r]=='W'){
            count++;}
            r++; 
 
            if(((r-l))==k){
                mn = min(mn,count);
                if(blocks[l]=='W'){
                    count--;
                }
                l++;
            }

        } 
        return mn;
    }
};
