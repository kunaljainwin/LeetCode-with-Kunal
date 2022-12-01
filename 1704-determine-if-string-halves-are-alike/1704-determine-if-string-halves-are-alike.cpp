class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,bool>mp={
          {  'a',true},
            { 'e',true},
            {'i',true},
           { 'o',true},
           { 'u',true},
          {  'A',true},
           { 'E',true},
            {'I',true},
          {  'O',true},
          {  'U',true}
            
        };
        int n= s.length();
        int suml=0,sumr=0;
       for(int i=0;i<n/2;i++){
           if(mp[s[i]]){
               suml++;
           }
       }
        for(int i=n/2;i<n;i++){
            if(mp[s[i]]){
                sumr++;
            }
        }
        
        return suml==sumr?true:false;
        
        
        
        
    }
};