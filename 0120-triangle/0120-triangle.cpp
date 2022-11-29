class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int h=triangle.size()-1;
        
        while(h--){
            for(int i=0;i<triangle[h].size();i++){
                triangle[h][i]+=min(triangle[h+1][i],triangle[h+1][i+1]);
            }
        }
        
        int ans=0;
        ans=triangle[0][0];
        
        return ans;
    }
};