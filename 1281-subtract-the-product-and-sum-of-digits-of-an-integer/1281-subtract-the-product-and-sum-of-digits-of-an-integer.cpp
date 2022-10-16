class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp=n;
        double digitSum=0;
        double digitProduct=1;
        while(temp){
            int r=temp%10;
            digitSum+=r;
            digitProduct*=r;
            temp/=10;
        }
        int ans=digitProduct-digitSum;
        return ans;
    }
};