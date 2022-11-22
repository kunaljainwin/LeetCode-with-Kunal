class Solution {
public:
    bool isSubIsland(vector<vector<int>>& grid1, vector<vector<int>>& grid2,int i,int j){
        int m=grid2.size();
        int n=grid2[0].size();
        if(i<0||i>=m||j<0||j>=n||grid2[i][j]==0){
            return true;
        }      
    
        if(grid1[i][j]==grid2[i][j]){
            grid2[i][j]=0;
            bool a=isSubIsland(grid1,grid2,i+1,j);
             bool b=  isSubIsland(grid1,grid2,i-1,j);
              bool c= isSubIsland(grid1,grid2,i,j+1);
               bool d=isSubIsland(grid1,grid2,i,j-1);
            return a&&b&&c&&d;
        }
        else{
            return false;
        }
        return NULL;
    }
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
      // do number of island type traversal on grid2
        int ans=0;
         int m=grid2.size();
        int n=grid2[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid2[i][j]==1){
                    if(isSubIsland(grid1,grid2,i,j)){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};