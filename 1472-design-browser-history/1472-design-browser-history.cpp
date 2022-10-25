class BrowserHistory {
public:
    stack<string>stkf;
    stack<string>stkb;
    BrowserHistory(string homepage) {
      stkb.push(homepage);
    }
    
    void visit(string url) {
       while(!stkf.empty())stkf.pop();
        stkb.push(url);
    }
    
    string back(int steps) {
        int size=stkb.size();
    int n=min(steps,size-1);
      while(n--){
          stkf.push(stkb.top());
          stkb.pop();
      }
        return stkb.top();
    }
    
    string forward(int steps) {
        int size=stkf.size();
        int n=min(steps,size);
        while(n--){
            stkb.push(stkf.top());
            stkf.pop();
        }
        return stkb.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */