class Solution {
public:
    string interpret(string c) {
        string result="";
        int i=0;
        while(i<c.length()){
            if(c[i]=='G'){
                result+="G";
                i++;
            }
            else if(c[i]=='('&&c[i+1]==')'){
                result+="o";
                    i+=2;
            }
            else{
                i++;
                for(int j=i;i<c.length();j++){
                    if(c[j]==')'){
                        i++;
                        break;
                    }
                        
                    else{
                          result+=c[j];
                        i++;
                    }
                      
                }
                
            }
        }
        return result;
    }
};