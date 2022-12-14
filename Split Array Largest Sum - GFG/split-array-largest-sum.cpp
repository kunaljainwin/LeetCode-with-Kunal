//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  
        // to check if requiredSum is possible to get by splitting array in k or less then k subarray
    bool isValid(int arr[],int requiredSum,int k,int n) {
        int sum=0,count=1;
        for(int i=0;i<n;i++) {
            if(sum+arr[i]<=requiredSum) {
                sum+=arr[i];
            } else {
                sum=arr[i];
                count++;
            }
        }
        return count<=k;
    }
  
    int splitArray(int arr[] ,int N, int K) {
        // code here
        // Limit of ans=[max_element(arr) ,sum(arr)]
        
        int low=*max_element(arr,arr+N);
        int high=accumulate(arr,arr+N,0);
        int ans=INT_MAX;
        
        while(low<=high) {
            int mid = low+(high-low)/2;
            if(isValid(arr,mid,K,N)) {
                ans=min(ans,mid);
                high=mid-1;   // To minimize our answer
            } else {
                low=mid+1;   // To get Valid Range
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends