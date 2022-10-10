class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int ans=0,prev=0;
        for(auto &it:bank){
            int c=count(it.begin(),it.end(),'1');
            
            if(c){
            ans+=prev*c;
            prev=c;
            }
        }
        return ans;
    }
};