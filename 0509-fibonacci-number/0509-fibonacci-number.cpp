class Solution {
    public:
        vector<int>dp;
    Solution(){
          vector<int>dpp(31,-1);
        dp=dpp;
    }


    int fib(int n) {
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return this->dp[n];
        }
        else{
            return this->dp[n]=fib(n-1)+fib(n-2);
        }
        return -1;
    }
};