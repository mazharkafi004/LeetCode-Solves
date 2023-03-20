class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0){
            return true;
        }
        int s = flowerbed.size();
        for(int i=0;i<s;i++){
            if(flowerbed[i]==0){
                if(i==0){
                    if(i+1!=s && flowerbed[i+1]==0){
                    n--;
                    flowerbed[i] = 1;}
                    else if(s==1){
                    n--;
                    flowerbed[i] = 1; 
                    }
                }
                else if(i==s-1 && flowerbed[i-1]==0){
                    n--;
                    flowerbed[i] = 1;
                }
                else{
                    if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                        n--;
                        flowerbed[i] = 1;
                    }
                }
            }
            if(n==0){
                return true;
            }
        }
        return false;
    }
};
