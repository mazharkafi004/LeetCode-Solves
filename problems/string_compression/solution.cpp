class Solution {
public:
    int compress(vector<char>& chars) {
       int index = 0, count = 0;
       for(int i=0;i<chars.size();){
           char currentChar = chars[i];
           count = 0;
           while(i<chars.size() && chars[i]==currentChar){
               count++;
               i++;
           }
           chars[index++] = currentChar;
           if(count>1){
                for (char c : std::to_string(count)) {
                    chars[index++] = c;
                }
           }

       }
       return index;
    }
};