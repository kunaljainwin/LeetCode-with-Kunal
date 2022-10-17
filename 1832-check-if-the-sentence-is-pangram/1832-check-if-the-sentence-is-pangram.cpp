class Solution {
public:
    bool checkIfPangram(string s) {
	   // Just make an character count array and check if count of each character is  atleast .

        vector<int>arr(26,0);
        for(auto &it :s)arr[it-'a']++;
        
        for(int i=0;i<26;i++)if(arr[i]<1)return false;
        return true;
    }
};
