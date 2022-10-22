class Solution {
public:
    bool dfs(vector<vector<char>>& board, string word,int x,int y,int idx){
     
        if(idx==word.size())return true;
        
         if (x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || 
            board[x][y] == '2' || board[x][y] != word[idx]) 
         {
             return false;
         }
        char c=board[x][y];
        board[x][y]='2';
        bool res=  dfs(board,word, x+1, y, idx+1) ||
                   dfs(board,word, x-1, y, idx+1) ||
                   dfs(board,word, x, y+1, idx+1) ||
                   dfs(board,word, x, y-1, idx+1);
        board[x][y]=c;
        
        return res;
        
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int n=word.size();
         for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(dfs(board,word,i,j,0)){
                    return true;
                }
            }
        }
        return false;
    }
};