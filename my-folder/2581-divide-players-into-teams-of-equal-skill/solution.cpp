class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long result = 0;
        int left = 0, right = skill.size() - 1;
        int chem = skill[left] + skill[right];
        while(left<=right){
            int check = skill[left] + skill[right];
            long long product = skill[left] * skill[right];
            if(chem == check){
                result+=product;
            }
            else{
                return -1;
            }
            left++;
            right--;
        }
        return result;
    }
};
