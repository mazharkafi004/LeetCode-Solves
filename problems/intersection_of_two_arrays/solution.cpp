class Solution {
public:
    bool binarySearch(vector<int>& nums1,int m, int x){
        int l = 0,  r = m-1;
        
        while(l<=r){
            int mid = (r-l)/2+l;
            if(nums1[mid]==x){
                return true;
            }
            else if(nums1[mid]>x){
                
                r = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        set<int>num;
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;i++){
            if(binarySearch(nums2,m,nums1[i])==true){
                num.insert(nums1[i]);
            }
        }
        vector<int> ans (num.begin(),num.end());
        return ans;
    }
};