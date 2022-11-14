class Solution {
public:
    
int find(int node, vector<int>& par){
    
if(node==par[node])return node;

    return par[node]=find(par[node],par);
}
void uni(int u, int v, vector<int>& par, vector<int>& rank){
    u=find(u,par), v=find(v,par);

    if(rank[u]<rank[v])par[u]=v;
    else if(rank[v]<rank[u])par[v]=u;
    else {
        rank[u]++;
        par[v]=u;
    }
}
int removeStones(vector<vector<int>>& stones) {
    unordered_map<int,vector<int>>rowsMap,colsMap;
    int n=stones.size();

    for(int i=0;i<n;i++){
        rowsMap[stones[i][0]].push_back(i);
        colsMap[stones[i][1]].push_back(i);
    }

    vector<int>par(n),rank(n);
    for(int i=0;i<n;i++)par[i]=i,rank[i]=0;

    for(int i=0;i<n;i++){
        int row=stones[i][0], col=stones[i][1];

        for(int j:rowsMap[row])uni(i,j,par,rank);
        for(int j:colsMap[col])uni(i,j,par,rank);
    }

    unordered_set<int>uniq;
    // for(int i=0;i<n;i++)uniq.insert(par[i]);
    for(int i=0;i<n;i++)uniq.insert(find(i,par));

    return stones.size()-uniq.size();
}
};

// I somewhat found the error. It was caused due to using
// for(int i=0;i<n;i++)uniq.insert(par[i]);
// instead of
    // for(int i=0;i<n;i++)uniq.insert(find(i,par));

// But they're the same right? What's the difference? Path compression updates the parent array.
// class Solution {
// public:
//     int removeStones(vector<vector<int>>& stones) {
//          int ans=0;
//         map<int,set<int>>vec;
//         set<int>temp;
//         temp.insert(stones[0][1]);
//         for(int i=0;i<stones.size()-1;i++){
//             if(stones[i][0]==stones[i+1][0]){
//                 temp.insert(stones[i+1][1]);
                
//             }
//             else{
                
//                 vec[stones[i][0]]=temp;
//                 temp.clear();
//                 temp.insert(stones[i+1][0]);
//             }
//         }
        
//         for(auto &it:vec){
//             for(auto &it1:it.second){
//                 cout<<it1<<" ";
//             }
//             cout<<endl;
//         }
        
        
        
        
//         return ans;
        
        
        
//     }
// };