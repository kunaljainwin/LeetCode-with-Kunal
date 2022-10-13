class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>maps;
        for(auto &it:nums)maps[it]++;
        
        int sum=0;
        for(auto &it:maps)sum+=it.second*(it.second-1)/2;
        
        return sum;
        
    }
};