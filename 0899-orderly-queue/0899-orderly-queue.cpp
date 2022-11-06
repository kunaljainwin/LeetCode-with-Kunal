class Solution {
public:
    string orderlyQueue(string s, int k) {
        int n=s.length();
        string ans=s;
        
        if(k>1){
            sort(s.begin(),s.end());
            ans=s;
        }
        else{
        while(1+n--){
            string next=s;
            next.erase(next.begin());
            next.push_back(s[0]);
            if(next<ans){
                ans=next;
            }
            s=next;
        }
        }
        
       
        
        
        
        return ans;
    }
    
};