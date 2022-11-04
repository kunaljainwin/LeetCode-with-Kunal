class Solution {
public:
    string reverseVowels(string s) {
    map<char,bool >arr;
        arr['a']=1;
        arr['e']=1;
        arr['i']=1;
        arr['o']=1;
        arr['u']=1;
        arr['A']=1;
        arr['E']=1;
        arr['I']=1;
        arr['O']=1;
        arr['U']=1;
        
        
        // two pointer
        int i=0,j=s.length()-1;
        while(i<j){
            if(!arr[s[i]]){
                i++;
            }
             if(!arr[s[j]]){
                j--;
            }
            if(arr[s[i]]&&arr[s[j]]){
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};