class Solution {
public:
    //recursion
    unordered_map<int,bool>mp;
    bool isHappy(int n) {
        if(n==1)
            return true;
        int sumOfSquares=0;
        int temp=n;
        if(mp[n]){
            return false;
        }
        mp[n]=true;
        while(n){
            int r=n%10;
            sumOfSquares+=r*r;
            n/=10;
        }
        
        return isHappy(sumOfSquares);
        
    }
};