//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
    vector<int>ans(2);
    int count=0;// count of 1  0=>++ 1=>-- 
    int m=INT_MIN;
    int l=0;
    int r=-1;
    for(int i=0;i<n;i++){
        if(count<0){
            // reset
            count=0;
            l=i;
            
        }
        if(str[i]=='0'){
            count++;
            r=i;
        }
        else{
            count--;
        }
        
        if(m<count){
            m=count;
            ans[0]=l+1;
            ans[1]=r+1;
            
        }
        
        
    }
    if(r==-1){
        return {-1};
    }
    return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends