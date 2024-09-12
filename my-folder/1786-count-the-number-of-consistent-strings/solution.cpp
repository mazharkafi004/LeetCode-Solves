class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>allowed_char;
        for(int i=0;i<allowed.size();i++){
            allowed_char.insert(allowed[i]);
        }
        int result = 0, counter = 0, m;
        for(int i=0;i<words.size();i++){
            m = words[i].size();
            for(int j=0;j<m;j++){
                if(allowed_char.find(words[i][j]) != allowed_char.end()){
                    counter++;
                }
                else{
                    counter = 0;
                    break;
                }
            }
            if(counter==m){
                result++;
            }
            counter = 0;
        }
        return result;
    }
};
