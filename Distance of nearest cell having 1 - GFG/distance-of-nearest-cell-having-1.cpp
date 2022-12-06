//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code 
	    int m=grid.size();
	    int n=grid[0].size();
	    vector<vector<int>>dp(m,vector<int>(n,INT_MAX));
for(int i=m-1;i>=0;i--){
    for(int j=n-1;j>=0;j--){
        
        if(grid[i][j]==1){
            dp[i][j]=0;
        }
        else{
            int a=INT_MAX;
            int b=INT_MAX;
            if(i+1<m)
                a=dp[i+1][j];
            if(j+1<n)
                b=dp[i][j+1];
                
        if(a!=INT_MAX||b!=INT_MAX)
            dp[i][j]=1+min(a,b);
        }
       
    }
}

for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        
    
            int a=INT_MAX;
            int b=INT_MAX;
            
        if(i-1>=0)    
            a=dp[i-1][j];
            
        if(j-1>=0)
            b=dp[i][j-1];
        if(a!=INT_MAX||b!=INT_MAX)
            dp[i][j]=min(dp[i][j],1+ min(a,b));
        
       
    }
}

// if(grid[m-1][0]==1){
//             dp[m-1][0]=0;
//         }
//         else{
//     dp[m-1][0]=1+min(dp[m-2][0],dp[m-1][1]);

//         }

// if(grid[0][n-1]==1){
//             dp[0][n-1]=0;
//         }
//         else{
//     dp[0][n-1]=1+min(dp[0][n-2],dp[1][n-1]);

//         }

return dp;
	    
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends