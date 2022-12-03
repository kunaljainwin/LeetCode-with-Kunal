class Solution {
public:
    string frequencySort(string s) {
        int n=s.length();
        string ans="";
        map<int ,int>mp;
        for(int i=0;i<n;i++)mp[s[i]]++;
        set<pair<int,int>>st;
        for(auto m:mp)st.insert({-m.second,m.first});
        for(auto s:st)while(mp[s.second]){
            ans+=s.second;
            mp[s.second]--;
        }
        return ans;
    }
};