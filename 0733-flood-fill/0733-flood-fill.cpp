class Solution {
public:
     void flood(vector<vector<int>>& grid,int i,int j,int initialColor,int &color){
        // base case
        int m=grid.size();
        int n=grid[0].size();
        if(i<0||i>=m||j<0||j>=n||grid[i][j]!=initialColor){
        return ;    
        }
        grid[i][j]=color;
        flood(grid,i+1,j,initialColor,color);
         flood(grid,i,j+1,initialColor,color);
         flood(grid,i-1,j,initialColor,color);
         flood(grid,i,j-1,initialColor,color);
        return ;
        
        
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]!=color)
        flood(image,sr,sc,image[sr][sc],color);
        return image;
    }
};