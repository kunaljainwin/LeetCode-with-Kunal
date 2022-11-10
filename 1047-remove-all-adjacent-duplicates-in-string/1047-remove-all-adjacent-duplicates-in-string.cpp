class Solution {
public:
    string removeDuplicates(string s) {
        // again a simple stack string ques
        // stack<char>stk;
        string ans="";
        for(auto &it:s){
            if(ans.empty()){
                ans+=it;
                continue;
            }
            if(it==ans.back())
            {
                ans.pop_back();
            }
            else{
                ans+=it;
            }
        }
        // string ans="";
        // while(!.empty()){
        //     ans=stk.top()+ans;
        //     stk.pop();
        // }
                // cout<<ans.back();

        return ans;
    }
};