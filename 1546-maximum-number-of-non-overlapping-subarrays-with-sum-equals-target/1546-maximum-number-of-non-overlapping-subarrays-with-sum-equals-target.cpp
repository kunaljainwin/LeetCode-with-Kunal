class Solution {
public:
    int maxNonOverlapping(vector<int>& nums, int target) {
        long long prefsum=0;
        int count=0;
        unordered_set<int>s;
        s.insert(0);
        for(auto &it:nums)
        {
            prefsum+=it;
            if(s.find(prefsum-target)!=s.end()){
                s.clear();
                prefsum=0;
                count++;
            }
            
            s.insert(prefsum);
        }
        return count;
    }
};