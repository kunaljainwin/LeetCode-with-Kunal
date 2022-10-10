class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
 
        int n=grid.size();
        int m=grid[0].size();
        vector<int>row(n);
        vector<int>col(m);
        for(int i=0;i<n;i++){
            row[i]=*max_element(grid[i].begin(),grid[i].end());
        }
        for(int i=0;i<m;i++){
            int mx=0;
           for(int j=0;j<n;j++){
               mx=max(mx,grid[j][i]);
           }
            col[i]=mx;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x=min(row[i],col[j]);
                ans+=x-grid[i][j];
            }
        }
        return ans;
    }
};