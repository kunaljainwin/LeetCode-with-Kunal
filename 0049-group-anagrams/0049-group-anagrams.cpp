class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>data;
        for( auto &it:strs){
            string s=it;
            sort(s.begin(),s.end());
            data[s].push_back(it);
        }
        
        
        
        
        vector<vector<string>>ans;
        for(auto &it:data){
            ans.push_back(vector<string>(it.second.begin(),it.second.end()));
        }
        
        
        
        return ans;
    }
};