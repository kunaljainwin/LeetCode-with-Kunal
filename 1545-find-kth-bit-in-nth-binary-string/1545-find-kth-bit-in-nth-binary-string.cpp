class Solution {
public:
    char findKthBit(int n, int k) {
        string s="0";
        string result=s;
        for(int i=1;i<n;i++){
            string inverted="";
            for(int i=0;i<result.length();i++){
                inverted+=result[i]^1;
            }
            reverse(inverted.begin(),inverted.end());
            
            result=result+"1"+inverted;
        }
        return result[k-1];
    }
};