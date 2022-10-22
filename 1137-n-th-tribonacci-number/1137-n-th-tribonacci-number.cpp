class Solution {
    private:
     //step3 // DP using a linear array of size(n) ans stroring as dp[n]=tribonacci(n)
    int dp[38]={-1};
    //-1 for excluding all case
   
public:
    Solution(){
        for(int i=0;i<38;i++)dp[i]=-1;
    }
   
    int tribonacci(int n) {
     //recursive
        
         //step1  //base case
        if(n<=1)
            return n;
        if(n==2)
            return 1;
        
        
        
         dp[0]=0;
    dp[1]=1;
    dp[2]=1;
        //step2 complexity - O(3^n) ❌
        //do dp optimization
        int ans=0;
        if(dp[n-3]!=-1){
            ans+=dp[n-3];
        }
        else{
            dp[n-3]=tribonacci(n-3);
               ans+=dp[n-3];
        }
        if(dp[n-2]!=-1){
            ans+=dp[n-2];
        }
        else{
            dp[n-2]=tribonacci(n-2);
             ans+=dp[n-2];
        }
        if(dp[n-1]!=-1){
            ans+=dp[n-1];
        }
        else{
            dp[n-1]=tribonacci(n-1);
                 ans+=dp[n-1];
        }
        dp[n]=ans;
        return ans;
    }
};