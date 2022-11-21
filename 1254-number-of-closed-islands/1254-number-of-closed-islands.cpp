class Solution {
public:
    bool helper(vector<vector<int>>& grid,int i,int j){
        int m=grid.size();
        int n=grid[0].size();
        if(i<0||i>=m||j<0||j>=n){
            return false;
        }
        else if(grid[i][j]==0){
            grid[i][j]=1;
            int a1=helper(grid,i+1,j);
            int a2=helper(grid,i,j+1);
            int a3=helper(grid,i-1,j);
            int a4=helper(grid,i,j-1);
            
            return a1&&a2&&a3&&a4;
            
            // return helper(grid,i+1,j)&&helper(grid,i,j+1)&&helper(grid,i-1,j)&&helper(grid,i,j-1);
        }
        return true;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                   if(helper(grid,i,j)){
                       count++;
                   }
                }
            }
        }
        return count;
    }
};