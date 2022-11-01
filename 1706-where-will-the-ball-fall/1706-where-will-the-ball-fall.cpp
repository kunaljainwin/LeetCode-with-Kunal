class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        // no paths of 2 ball reaching end are common
        // balls reaching boundary points are also out
        //  1 and -1 consecutively are dead end 
        // -1 at left corner and 1 at right corner also dead end
        //trace the path for every ball if it reaches any dead end store -1
        //or if reaches bottom boundary give 1
        int m=grid.size();
        int n=grid[0].size();
        vector<int>ans(n,1);
        for(int i=0;i<n;i++){
            //each column
            // ball position
            int p=0;
            int q=i;
            while(p<m){
                //break at dead end
                // if(p>=m||q<0||q>=n){
                //     break;
                // }
                if(q==0&&grid[p][q]==-1){
                    ans[i]=-1;
                    break;
                }
                else if(q==n-1&&grid[p][q]==1){
                    ans[i]=-1;
                    break;
                }
                else if(q<n&&grid[p][q]==1&&grid[p][q+1]==-1){
                     ans[i]=-1;
                    break;
                }
                 else if(q>0&&grid[p][q-1]==1&&grid[p][q]==-1){
                     ans[i]=-1;
                    break;
                }
                
                if(grid[p][q]==1){
                    p++;q++;
                }
                else{
                    p++;q--;
                }
                ans[i]=q;
               
            }
            
        }
        return ans;
        
    }
};