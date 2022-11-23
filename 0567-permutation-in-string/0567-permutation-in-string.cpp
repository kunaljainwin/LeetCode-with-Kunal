class Solution {
public:
    bool check( unordered_map<char,int>mp,int n,string &s2,int i){
        for(int x=i;x<s2.length()&&n--;x++){
            if(mp[s2[x]]<=0){
                return false; 
            }
            else{
                mp[s2[x]]--;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
        unordered_map<char,int>mp;
        int n=s1.length();
        for(auto &it:s1){
            mp[it]++;
        }
        for(int i=0;i<=s2.length()-s1.length();i++){
            
              if(check(mp,n,s2,i)){
                  return true;
              }
            
        }
        
        return false;
    }
};