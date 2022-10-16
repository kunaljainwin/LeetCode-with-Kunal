//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string result="";
            vector<int>arr1(26,0),arr2(26,0);
            for(auto &it:A)arr1[it-'a']=1;
            for(auto &it:B)arr2[it-'a']=1;
            for(int i=0;i<26;i++)if(arr1[i]^arr2[i]==1)result+=i+'a';
            // code here
            if(result.length()==0)return "-1";
            return result;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends