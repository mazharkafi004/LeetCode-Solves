class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        for(int i=0;i<asteroids.size();i++){
            if(st.empty() || asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && st.top()>0 && abs(asteroids[i])>st.top()){
                    st.pop();
                }
                if(!st.empty() && abs(asteroids[i])==st.top()){
                    st.pop();
                }
                else{
                    if(st.empty() || st.top()<0){
                        st.push(asteroids[i]);
                    }
                }
            }
            
        }
            vector<int>vec;
            while(!st.empty()){
                vec.push_back(st.top());
                st.pop();
            }
            reverse(vec.begin(),vec.end());
            return vec;
    }
};