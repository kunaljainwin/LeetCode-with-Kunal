class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char>s;
        for(auto &it:jewels)s.insert(it);
        int ans=0;
        for(auto &it:stones)if(s.find(it)!=s.end())ans++;
        return ans;
    }
};