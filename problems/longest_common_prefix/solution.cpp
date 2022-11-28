class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       if(strs.size()==0 ){
           return "";
       }
       sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int i=0;
        for(int j=0;j<first.size();j++){
            if(first[j]==last[j]){
                i++;
            }
            else{
                break;
            }
        }
        if(i==0){
            return "";
        }
        else{
            return first.substr(0,i);
        }
    }
};