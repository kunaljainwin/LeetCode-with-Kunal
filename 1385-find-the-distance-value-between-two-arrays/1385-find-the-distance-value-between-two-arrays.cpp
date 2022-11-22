class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        // binary seach on 2nd array
        int n1=arr1.size();
        set<int>s;
        int count=0;
        for(auto &it:arr2)
            s.insert(it);
        for(int i=0;i<n1;i++){
            // find closest element to i th in arr1
            auto x=s.lower_bound(arr1[i]);
            if(x==s.begin()){
                if(abs(arr1[i]-*x)<=d){
                    count++;
                }
            }
                else if(x==s.end()){
                    if(abs(arr1[i]-*s.rbegin())<=d){
                    count++;
                }
                }
            
                else{
                     if(abs(arr1[i]-*x)<=d){
                    count++;
                         continue;
                }
                    x--;
                    
                    if(arr1[i]-  *(x)<=d){
                      
                        count++;
                    }
                }
            }
        
                    return n1-count;

        
        
        
        
        
        
        
        
        
        
        // brute force
        
        // int count=0;
        // int n1=arr1.size();
        // int n2=arr2.size();
        // for(int i=0;i<n1;i++){
        //     bool flag=true;
        //     for(int j=0;j<n2;j++){
        //         if(abs(arr1[i]-arr2[j])<=d){
        //             flag=false;
        //             break;
        //         }
        //     }
        //     if(flag){
        //         count++;
        //     }
        // }
        // return count;
    }
};