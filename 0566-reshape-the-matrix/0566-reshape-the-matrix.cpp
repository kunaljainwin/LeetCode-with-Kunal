class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
       
        int n=mat.size(),m=mat[0].size();
        if(n*m==r*c&&n!=r){
            //reshaping 
            vector<vector<int>>output(r,vector<int>(c,0));
            int p=0,q=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                 
                    output[p][q]=mat[i][j];
                    
                    if(q==c-1){
                        p++;
                        q=0;
                    }
                    else{
                        q++;
                        
                    }
                    
                }
            }
            
            
            return output;
        }
        else{
            return mat;
        }
    }
};