class Solution {
    public int[] countBits(int n) {
        int [] counter = new int [n+1];
        if(n==0){
            return counter;
        }
        for(int i=1;i<=n;i++){
            if(i%2==0){
                counter[i] = counter[i/2];
            }
            else{
                counter[i] = counter[i-1]+1;
            }
        }
        return counter;
    }
}
