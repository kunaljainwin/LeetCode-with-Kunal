class Solution {
public:
    string removeDuplicates(string s) {
        // again a simple stack string ques
        stack<char>stk;
        for(auto &it:s){
            if(stk.empty()){
                stk.push(it);
                continue;
            }
            if(it==stk.top())
            {
                stk.pop();
            }
            else{
                stk.push(it);
            }
        }
        string ans="";
        while(!stk.empty()){
            ans=stk.top()+ans;
            stk.pop();
        }
        return ans;
    }
};