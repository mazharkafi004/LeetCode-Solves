class Solution {
public:
    string largestGoodInteger(string num) {
        int count = 1, mxGood = -1;
        for(int i=1;i<num.size();i++){
           if(num[i]==num[i-1]){
               count++;
               if(count == 3){
                   if(num[i]-'0'>mxGood){
                       mxGood = num[i]-'0';
                   }
                //    count = 1;
               }
                
           }
           else{
               count = 1;
           }
        } 
        return (mxGood==-1)?"":to_string(mxGood) + to_string(mxGood) + to_string(mxGood);
    }
};