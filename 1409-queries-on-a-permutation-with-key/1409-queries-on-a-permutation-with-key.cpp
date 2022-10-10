class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int>arr(m);
        int n=queries.size();
                vector<int>ans(n);
        
        for(int i=1;i<=m;i++)arr[i-1]=i;
        
        for(int i=0;i<n;i++){
            auto x=find(arr.begin(),arr.end(),queries[i]);
            int val=*x;
            arr.erase(x);
            arr.insert(arr.begin(),val);
            ans[i]=x-arr.begin();
        }
        
        
        
        
        return ans;
    }
};