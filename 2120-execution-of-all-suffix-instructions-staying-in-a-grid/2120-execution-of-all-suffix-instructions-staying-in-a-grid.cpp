class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
       
        
      
        int size=s.length();
         vector<int>ans(size,0);
  
        for(int i=0;i<size;i++){
            int r=startPos[0];
        int c=startPos[1];
                  int count=0;
        for(int j=i;j<size;j++){
            char it=s[j];
            if(it=='L')c--;
            else if(it=='R')c++;
            else if(it=='U')r--;
            else r++;
            
            if(c<0||c>=n||r<0||r>=n){
                break;
            }
            else{
                      count++;
            }
        }
            ans[i]=count;
        }
        return ans;
    }
};