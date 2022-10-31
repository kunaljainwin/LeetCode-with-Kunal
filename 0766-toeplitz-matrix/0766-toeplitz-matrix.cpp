class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            int p=i,q=0;
            while(p+1<m&&q+1<n){
                if(matrix[p][q]!=matrix[p+1][q+1])
                    return false;
                p++;
                q++;
            }
        }
        for(int j=0;j<n;j++){
             int p=0,q=j;
            while(p+1<m&&q+1<n){
                if(matrix[p][q]!=matrix[p+1][q+1])
                    return false;
                p++;
                q++;
            }
        }
        return true;
    }
};