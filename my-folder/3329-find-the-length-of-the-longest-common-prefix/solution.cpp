class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;
        for(auto i:arr1){
            while(i>0){
                st.insert(i);
                i/=10;
            }
        }
        int mx=0;
        for(auto i:arr2){
            while(i>0){
                if(st.find(i)!=st.end()){
                    string s = to_string(i);
                    int t = s.size();
                    mx=max(mx,t);
                    break;
                }
                i/=10;
            }
        }

        return mx;
    }
};
