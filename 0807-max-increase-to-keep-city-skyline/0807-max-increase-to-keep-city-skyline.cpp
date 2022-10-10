class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
 
        int n=grid.size();
        int m=grid[0].size();
        vector<int>row(n);
        vector<int>col(m);
          for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
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