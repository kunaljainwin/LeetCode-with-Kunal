class Solution {
public:
    string reverseWords(string s) {
      stringstream is(s);
      string str,ans="";
      while(is>>str){
        ans=str+" "+ans;
      }
      return ans.substr(0,ans.end()-ans.begin()-1);
      
    }
};