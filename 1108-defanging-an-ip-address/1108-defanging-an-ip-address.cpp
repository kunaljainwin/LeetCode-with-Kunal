class Solution {
public:
    string defangIPaddr(string ad) {
        string ans="";
        int n=ad.length();
        for(int i=0;i<n;i++){
            if(ad[i]=='.'){
                ans+="[.]";
            }
            else{
                ans+=ad[i];
            }
        }
        return ans;
    }
};