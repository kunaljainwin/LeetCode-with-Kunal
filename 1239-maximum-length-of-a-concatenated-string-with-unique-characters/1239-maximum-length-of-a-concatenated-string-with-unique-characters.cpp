class Solution {
public:
    
    int bitmask(string s){
        int r=0;
        vector<int>arr(26,0);
        for(auto &it:s){
            int i=it-'a';
            if(!arr[i]){
                   r+=pow(2,i);
                arr[i]=1;
            }
         
            else
                return -1;
            
        }
        return r;
    }
    
    void recursive(vector<int>&arr,int tillnow,int i,int &ans){
        //base case
        if(i<0)
            return;
    
        // look if it can be added also if can be return me the updated array and new ans in O(n)
        int temp=tillnow^arr[i];
        if(temp==(tillnow|arr[i])){
            ans=max(ans,__builtin_popcount(temp));
            recursive(arr,tillnow,i-1,ans);
            tillnow=temp;
            recursive(arr,tillnow,i-1,ans);
        }
        else{
            recursive(arr,tillnow,i-1,ans);
        }
        return;
            
     }
    int maxLength(vector<string>& arr) {
        int ans=0;
        
        // change representation of string to array or a bit mask
        // going with bitmask
        set<int>maskedarr;
        for(auto &it:arr){
            maskedarr.insert(bitmask(it));
            cout<<bitmask(it)<<" ";
        }
        maskedarr.insert(-1);
        auto it=maskedarr.find(-1);
        maskedarr.erase(it);
        
        vector<int>vec(maskedarr.begin(),maskedarr.end());
        
        // write a recursive function to go through all valid subsequences
        // gived error because in the case of "aa","bb" set became empty
        if(maskedarr.size())//error correction
        recursive(vec,0,vec.size()-1,ans);
        // ans=__builtin_popcount(ans); 
        
        
        // largest number doesnt mean that it has maximum set bits right
        return ans;
        
        
    }
};