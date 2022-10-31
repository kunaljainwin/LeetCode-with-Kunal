class Solution {
  public:
    
    int rec(int *dp,int n){
         if(n<0)
           return 0;
        if(n==0)
            return 1;
        if(dp[n]==0){
            dp[n]=rec(dp,n-1)+rec(dp,n-2);
        }
         return dp[n];
    }
    
    
    int climbStairs(int n) {
        int arr[46]={0};
        return rec(arr,n);
    }
    
};
