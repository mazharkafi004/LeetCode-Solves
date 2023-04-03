class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n = people.size(), l = 0, r = n-1, count = 0;
        while(l<=r){
            if(people[r]==limit){
                count++;
                r--;
            }
            else if(people[r]+people[l]<=limit){
                count++;
                l++;
                r--;
            }
            else if(people[r]+people[l]>limit){
                count++;
                r--;
            }
        }
        return count;
    }
};