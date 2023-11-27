class Solution {
    public int maxArea(int[] height) {
        int left = 0, right = height.length - 1 , width = 0,maxWater = 0;
        while(left<right){
           width = right-left;
           int minHeight = Math.min(height[left],height[right]);
           int currentWater = width*minHeight;
           maxWater = Math.max(maxWater,currentWater);
        while(height[left]<=minHeight && left++<right);
        while(height[right]<=minHeight && left<right--);
        }
        return maxWater;
    }
}
