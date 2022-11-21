class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> output;
        vector<int> row;

        
        for(int i=1;i<=numRows;i++){

            vector<int>temp(i); 

            for(int j=0;j<(i+1)/2;j++){
                if(j>0){
                    temp[j]=row[j-1]+row[j];
                    temp[i-j-1]=temp[j];
                }
                else{
                    temp[0]=1;
                    temp[i-1]=1;
                }
                
            }
            row=temp;
            output.push_back(row);
        }
        return output;
    }
};