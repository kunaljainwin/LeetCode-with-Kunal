class Solution {
public:
    // replcae map with a array
    bool check( vector<int> mp,int n,string &s2,int i){
        for(int x=i;n--!=0;x++){
            if(mp[s2[x]-'a']<=0){
                return false; 
            }
            else{
                mp[s2[x]-'a']--;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length())
            return false;
       vector<int>mp(26,0);
        int n=s1.length();
        for(auto &it:s1){
            mp[it-'a']++;
        }
        for(int i=0;i<=s2.length()-s1.length();i++){
            
              if(check(mp,n,s2,i)){
                  return true;
              }
            
        }
        
        return false;
    }
};