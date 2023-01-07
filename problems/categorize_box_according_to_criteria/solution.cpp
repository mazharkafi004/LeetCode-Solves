class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool isBulky = false;
        bool isHeavy = false;
        if(mass>=100){
            isHeavy = true;
        }
        if(length>=10000 || width>=10000 || height>=10000){
            isBulky =true;
        }
        else{
         unsigned long long volume = (long long)length*(long long)width*(long long)height;
        if(volume>=1000000000) {
            isBulky = true;
        }
        }
        if(isBulky && isHeavy){
            return "Both";
        }
        else if (isBulky && !isHeavy){
            return "Bulky";
        }
        else if (!isBulky && isHeavy){
            return "Heavy";
        }
        else{
            return "Neither";
        }
    
        
    }
};