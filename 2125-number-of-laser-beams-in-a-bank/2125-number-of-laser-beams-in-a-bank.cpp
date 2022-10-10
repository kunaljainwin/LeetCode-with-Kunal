class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int n=bank.size(),ans=0,prev=0;
        for(int i=0;i<n;i++){
            int c=count(bank[i].begin(),bank[i].end(),'1');
            
            if(c){
                            ans+=prev*c;
            prev=c;
            }
        }
        return ans;
    }
};