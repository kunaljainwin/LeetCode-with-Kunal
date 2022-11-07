class Solution {
public:
    int maximum69Number (int num) {
        string s=to_string(num);
        int i=0,j=s.length()-1;
    
        for(auto &it:s){
            if(it=='6'){
                it='9';
                break;
            }
        }
        
        return stoi(s);
    }
};