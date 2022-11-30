class Solution {
public:
    char nextGreatestLetter(vector<char>& s, char target) {
        auto it=upper_bound(s.begin(),s.end(),target);
        if(it==s.end()){
            return *s.begin();
        }
        return *it;
    }
};