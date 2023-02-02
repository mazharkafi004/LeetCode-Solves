class Solution {
public:
    int strStr(string haystack, string needle) {
        int m =haystack.size(),  n = needle.size();
        if(m<n){
            return -1;
        }
        if(n==0){
            return 0;
        }
        for(int i=0;i<=m-n;i++){
            int count = 0;
               for(int k=0;k<n;k++){
                   if(haystack[k+i]!=needle[k]){
                       break;
                   }  
                   else{
                       count++;
                   }     
               }
               if(count==n){
                   return i;
               }
            } 
        
        return -1;
       
    }
};