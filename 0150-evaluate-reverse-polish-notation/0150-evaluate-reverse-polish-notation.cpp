class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>stk;
        for(auto &it:tokens){
          
            if(it=="+"){
                long long b=stk.top();
                stk.pop();
                int a=stk.top();   stk.pop();
                long long c=a+b;
                stk.push(c);
            }
            else if(it=="-"){
                 long long b=stk.top();
                stk.pop();
                long long a=stk.top();   stk.pop();
                long long c=a-b;
                stk.push(c);
            }
            else if(it=="*"){
                long long b=stk.top();
                stk.pop();
                long long a=stk.top();   stk.pop();
                long long c=a*b;
                stk.push(c);
            }
            else if(it=="/"){
                long long b=stk.top();
                stk.pop();
                long long a=stk.top();
                   stk.pop();
                long long c=a/b;
                stk.push(c);
            }
            else{
                stk.push(stoi(it));
            }
         
        }
                        return(int) stk.top();

    }
};