//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:


    // recursive(){
    //     if(N<0){
    //         return ;
    //     }
    //     recursive(N-2000,ans[9]+1);
    //     recursive(N-2000,ans[8]+1);
    // }
    vector<int> minPartition(int N)
    {
        vector<int>ans;
        // code here
        vector<int>change={1,2,5,10,20,50,100,200,500,2000};
        // lets go greedy;
        int i=9;
        while(N){
            int x=N/change[i];
              N%=change[i];
              while(x--)
                ans.push_back(change[i]);
                
              i--;
              
        }
          
            // ans[8]=N/500;
            // N%=500;
            // ans[7]=N/200;
            // N%=200;
            // ans[6]=N/100;
            // N%=100;
            // ans[5]=N/50;
            // N%=50;
            // ans[4]=N/20;
            // N%=20;
            // ans[3]=N/10;
            // N%=10;
            // ans[2]=N/5;
            // N%=5;
            // ans[1]=N/2;
            // N%=2;
            // ans[0]=N/1;
            // N%=1;
            
            
        
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends