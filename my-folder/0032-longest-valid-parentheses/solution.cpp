class Solution {
public:
    int longestValidParentheses(string s) {
        int n = s.size();
        stack<int>pos;
        vector<int>counter(n,0);
        for(int i=0;i<n;i++){
            if(s[i]==')'){
                if(!pos.empty()){
                int top = pos.top();
                pos.pop();
                counter[i] = 1;
                counter[top] = 1;
                }
            }
            else{
                pos.push(i);
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<counter[i]<<endl;
        // }
        int result = 0, cnt = 0;
        for(int i=0;i<n;i++){
            if(counter[i]==1){
                cnt++;
            }
            else{
                result = max(result,cnt);
                cnt = 0;
            }
        }
        return max(result,cnt);

    }
};
