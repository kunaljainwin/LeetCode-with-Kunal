//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        int ans=0;
        int k=0;// index at W
        vector<bool>visited(S.length(),false);
        for(int i=0;i<S.length();i++){
            if(visited[i]){
                
            }
            else if(S[i]==W[k]){
                k++;
                visited[i]=true;
                if(k==W.length()){
                    ans++;
                    k=0;
                    i=0;
                }
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends