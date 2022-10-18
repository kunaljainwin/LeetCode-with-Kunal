class Solution {
public:
    string countAndSay(int n) {
        // map can be userd
        if(n==1)
            return "1";
        string say=countAndSay(n-1);
        int count=0;
        char c=say[0];
        string result="";
        for(int i=0;i<say.length();i++){
            if(say[i]==c){
                count++;
            }else{
                result+=to_string(count)+c;
                count=0;
                c=say[i];
                i--;
              
            }
        }
        if(count){
              result+=to_string(count)+c;
        }
 
        return result;
    }
};