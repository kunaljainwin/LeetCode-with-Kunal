class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto &it:arr){
             mp[it]++;
        }
         unordered_map<int,int>mp2;
        for(auto &it:mp){
              if(mp2[it.second]){
                return false;
            }
            mp2[it.second]++;
           
        }
        return true;
    }
};