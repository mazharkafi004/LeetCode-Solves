class Solution {
public:
static bool sortpair(const pair<int,int> &a,const pair<int,int> &b)
{   if(a.first == b.first){
    return (a.second > b.second);
     }
    else{
    return (a.first > b.first); 
    }
   
}
vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector< pair <int,int> > choice;
        for(int i=0;i<restaurants.size();i++){
            if(restaurants[i][3]<=maxPrice && restaurants[i][4]<=maxDistance) {
                if(veganFriendly==0){
                    choice.push_back(make_pair(restaurants[i][1],restaurants[i][0]));
                }
                else{
                    if(restaurants[i][2]==1){
                    choice.push_back(make_pair(restaurants[i][1],restaurants[i][0]));
                    }
                }
            }
        }
        vector<int> ans;
        sort(choice.begin(),choice.end(),sortpair);
        for(auto ch: choice) {
            ans.push_back(ch.second);
        }
        return ans;
    }
};
