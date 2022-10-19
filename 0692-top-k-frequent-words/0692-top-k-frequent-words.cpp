class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string>ans;
        map<string,int>fmap;
        for(auto &its:words){

            fmap[its]++;
        }
        map<int,vector<string>,greater<int>>smap;
        for(auto &it:fmap){
        
                smap[it.second].push_back(it.first);
        
        }
        
        for(auto &its:smap){
            
                
              int size=its.second.size();
            for(int i=0;i<size&&k!=0;i++){
                k--;
                ans.push_back(its.second[i]);
                            
            }
            if(k==0)
                break;
        }

        
        return ans;
    }
};