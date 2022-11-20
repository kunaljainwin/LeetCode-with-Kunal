class Solution {
public:
    double average(vector<int>& salary) {
        int n=salary.size();
        double ans=0;
        int mi=INT_MAX,ma=INT_MIN;
        for(int i=0;i<n;i++){
            ans+=salary[i];
            mi=min(mi,salary[i]);
            ma=max(ma,salary[i]);
        }
        ans-=mi+ma;
        return ans/(n-2);
    }
};