class Solution {
public:
    string makeGood(string s) {
          int n=s.length();
        stack<char>stk;
        for(auto &it:s){
            if(stk.empty())
                stk.push(it);
            else if(abs(stk.top()-it)==32){
                stk.pop();
            }
            else{
                stk.push(it);
            }
        }
        s="";
        while(!stk.empty()){
            s=stk.top()+s;
            stk.pop();
        }
        
        return s;
    }
};