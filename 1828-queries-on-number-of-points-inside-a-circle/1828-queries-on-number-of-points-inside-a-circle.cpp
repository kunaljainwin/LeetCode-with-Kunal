class Solution {
public:
    bool insideCircle(vector<int>&q,vector<int>p){
        int x=p[0]-q[0];
        int y=p[1]-q[1];
        int distance2=x*x+y*y;
        if(distance2<=pow(q[2],2))
            return true;
        
        return false;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>queries) {
        map<vector<int>,int>maps;
           vector<int>ans;
        for(auto &it:points)
            maps[it]++;
        
        for(auto &it:queries){
            int sum=0;
            for(auto &it1:maps){
                if(insideCircle(it,it1.first)){
                    sum+=it1.second;
                }
            }
            ans.push_back(sum);
        }
        return ans;
    }
};