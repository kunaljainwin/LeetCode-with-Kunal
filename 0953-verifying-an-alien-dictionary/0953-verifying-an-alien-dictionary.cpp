class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        char arr[26];
        char c='a';
        for(auto &it:order){
            arr[it-'a']=c;
            c++;
        }
//           for(auto &it:order){
// cout<<it<<" ";
//         }
        for(auto &it1:words){
            for(auto &it2:it1){
                it2=arr[it2-'a'];
            }
        }
        // vector<string> w(words.begin(),words.end());
        // sort(w.begin(),w.end());
        // for(int i=0;i<words.size();i++){
        //     if(words[i].compare(w[i])!=0){
        //         return false;
        //     }
        // }
        return is_sorted(words.begin(),words.end());
        // return true;
    }
};