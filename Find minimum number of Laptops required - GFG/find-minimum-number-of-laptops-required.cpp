//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minLaptops(int N, int start[], int end[]) {
        // Code here
        // we should use array but limitis 1 to 10^9
        // we will use a  ordered map
        map<int,int>mp;
        for(int i=0;i<N;i++){
            mp[start[i]]++;
            mp[end[i]]--;
        }
        int ans=0;
        int x=0;
        for(auto &it:mp){
            x+=it.second;
            ans=max(ans,x);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int start[N], end[N];
        for(int i=0; i<N; i++)
            cin>>start[i];
        for(int i=0; i<N; i++)
            cin>>end[i];
            
        Solution ob;
        cout << ob.minLaptops(N, start, end) << endl;
    }
}
// } Driver Code Ends