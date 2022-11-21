class Solution {
public:
    string rev(string str){
reverse(str.begin(),str.end());
        return str;
    }
    string reverseWords(string s) {
     string ans;
        string temp;
        int l=s.length();
        for(int i=0;i<l;i++){
            if(s[i]==' '){
                ans+=rev(temp)+" ";
                temp="";
            }
            else{
                temp+=s[i];
            }
        }
        if(temp.length())
        {
               ans+=rev(temp);
        }
        
        return ans;
        
    }
};