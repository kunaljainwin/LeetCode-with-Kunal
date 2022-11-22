class Solution {
public:
    int longestPalindrome(string s) {
        string str=s;
        int count=0;
        int n=str.length();
        //logn
        sort(str.begin(),str.end());
        //n/2
        for(int i=0;i<n;i+=2){
            if(str[i]==str[i+1]){
                count+=2;
            }
            else
                i--;
        }
        if(str.length()>count)
            count++;
        return count;
    }
};