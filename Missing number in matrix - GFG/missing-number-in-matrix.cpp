//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    long long int MissingNo(vector<vector<int> >& matrix) {
        // Code here
        int n=matrix.size();
        long long int sum=0;
        long long int ans=-1;
        for(int i=0;i<2;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    sum=0;
                    break;
                    
                }
                else{
                    sum+=matrix[i][j];
                }
            }
            if(sum!=0)
            break;
        }
        // find 0 and put its value;
        int p,q;
        vector<long long int>rowSum(n,0);
        vector<long long int>colSum(n,0);
        long long int leftDiagonal=0;
        long long int rightDiagonal=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                int x=matrix[i][j];
                if(x==0){
                    p=i;
                    q=j;
                }
                    rowSum[i]+=x;
                    colSum[j]+=x;
                    if(i==j){
                        leftDiagonal+=x;
                    }
                     if(i==n-j-1){
                        rightDiagonal+=x;
                    }
                
            }
        }
        ans=sum-rowSum[p];
        if(ans>0){
            rowSum[p]+= ans;
            colSum[q]+=ans;
            if(p==q)
            leftDiagonal+=ans;
            if(p==n-q-1){
                rightDiagonal+=ans;
            }
            
            for(int i=0;i<n;i++){
                if(rowSum[i]!=sum)
                return -1;
            }
            for(int i=0;i<n;i++){
                if(colSum[i]!=sum)
                return -1;
            }
            if(leftDiagonal!=sum||rightDiagonal!=sum)
            return -1;
            
            
            
            
            
            
            
        }
        else{
            return -1;
        }
        
        
        
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		long long int ans = ob.MissingNo(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends