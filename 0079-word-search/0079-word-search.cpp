class Solution {
public:
    bool recursive(vector<vector<bool>>&visited,vector<vector<char>>&b,string &w,int i,int j,int k){
        if(k==w.length())
            return true;
        
        if(i<0||i>=b.size()||j<0||j>=b[0].size())
            return false;
        if(visited[i][j])
            return false;
        if(b[i][j]!=w[k])
            return false;
       
        visited[i][j]=true;
        if(recursive(visited,b,w,i+1,j,k+1)||recursive(visited,b,w,i,j+1,k+1)||recursive(visited,b,w,i,j-1,k+1)||recursive(visited,b,w,i-1,j,k+1))return true;
        
        visited[i][j]=false;
        return false;
        
        
        
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int rows=board.size();
        int columns=board[0].size();
        vector<vector<bool>>visited(rows,vector<bool>(columns,false));
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(board[i][j]==word[0]&&recursive(visited,board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};