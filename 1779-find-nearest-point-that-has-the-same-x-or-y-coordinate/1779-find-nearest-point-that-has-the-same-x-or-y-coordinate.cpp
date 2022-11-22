class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& p) {
        int m=INT_MAX;
        int ans=-1;
        for(int i=0;i<p.size();i++){
            if(p[i][0]==x||p[i][1]==y){
                int t=abs(p[i][0]-x)+abs(p[i][1]-y);
            if(m>t){
                ans=i;
                m=t;
            }

            }
        }
        return ans;
    }
};