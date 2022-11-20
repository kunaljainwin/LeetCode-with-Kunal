class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>output;
        unordered_map<int,int>hmap1;
         unordered_map<int,int>hmap2;
        for(int i=0;i<nums1.size();i++){
           hmap1[nums1[i]]++;
            
        }
                for(int i=0;i<nums2.size();i++){
          hmap2[nums2[i]]++;
        }
        for(auto a:hmap1){
            
               int i=min(a.second,hmap2[a.first]);
            cout<<a.second<<" "<<hmap2[a.first]<<endl;
                while(i--){
                    output.push_back(a.first);
                }
            
        }
    
    return output;
    }
};