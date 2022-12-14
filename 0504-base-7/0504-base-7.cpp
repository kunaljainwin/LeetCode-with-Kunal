class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        if(num==0){
            return "0";
        }
        int n=abs(num);
        while(n){
            int r=n%7;
            ans=to_string(r)+ans;
            n/=7;
        }
        if(num<0){
            ans="-"+ans;
        }
        return ans;
    }
};