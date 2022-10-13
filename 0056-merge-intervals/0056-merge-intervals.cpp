class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        map<int,int>maps;
        for(auto &it:intervals){
            maps[it[0]]++;
            maps[it[1]]--;
        }
        int count=0;
         vector<vector<int>>ans;
               vector<int>interval;

        for(auto &it:maps){
                   count+=it.second;
            if(interval.size()==0)
                    interval.push_back(it.first);

            if(count<=0){                   
                interval.push_back(it.first);
                ans.push_back(interval);
                interval.clear();
            }
      
        }
        return ans;
    }
};