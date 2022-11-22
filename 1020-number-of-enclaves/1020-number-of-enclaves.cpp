class Solution {
public:
    //return -1 if not otherwise size
    int isEnclaved(vector<vector<int>>&grid,int i,int j,int &m,int &n){
        
        if(i<0||i>=m||j<0||j>=n){
            return INT_MIN;
        }
        if(grid[i][j]==0){
            return 0;
        }
        grid[i][j]=0;
        int a=isEnclaved(grid,i,j+1,m,n);
        int b=isEnclaved(grid,i+1,j,m,n);
        int c=isEnclaved(grid,i-1,j,m,n);
        int d=isEnclaved(grid,i,j-1,m,n);
        if( a<0||b<0||c<0||d<0)
            return INT_MIN;
        
        return 1+a+b+c+d;
        
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        // 1 represents land
        // a move 4 directions
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    int a=isEnclaved(grid,i,j,m,n);
                    if(a>-1){
                     ans+=a;   
                    }
                        
                }
            }
        }
        return ans;
    }
};