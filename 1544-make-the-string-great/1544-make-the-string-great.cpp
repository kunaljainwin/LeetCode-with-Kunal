class Solution {
public:
    string makeGood(string s) {
          int n=s.length();
        
        for(int i=0;i<n-1;i++){
            if(abs(s[i]-s[i+1])==97-65){
                s.erase(s.begin()+i);
                s.erase(s.begin()+i);
                // cout<<s<<endl;
                n-=2;
                i=-1;
            
            }
        }
        return s;
    }
};