class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int ans=0;
        
        
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<sentences[i].length();j++){
                if(sentences[i][j]==' ')
                    count++;
            }
            ans=max(ans,count+1);
        }
        
        
        
        return ans;
        
        
        
        
        
        
        
        
        int count=0;
        for(int i=0;i<n;i++){
            stringstream ss(sentences[i]);
            string k;
            while(ss>>k){
                count++;
            }
            ans=max(ans,count);
            count=0;
        }
        return ans;
    }
};