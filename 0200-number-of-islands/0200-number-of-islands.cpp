class Solution {
public:
    void floodFill(vector<vector<char>>& grid,int i,int j){
        // base case
        int m=grid.size();
        int n=grid[0].size();
        if(i<0||i>=m||j<0||j>=n||grid[i][j]=='0'){
        return ;    
        }
        grid[i][j]='0';
        floodFill(grid,i+1,j);
         floodFill(grid,i,j+1);
         floodFill(grid,i-1,j);
         floodFill(grid,i,j-1);
        return ;
        
        
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    floodFill(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};