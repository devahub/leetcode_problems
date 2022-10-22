class Solution {
public:
    int idx[4]={0,1,-1,0};
    int idy[4]={1, 0, 0, -1};
    
    void dfs(vector<vector<char>>& board,vector<vector<bool>>&vis,int i,int j){
    
        if (min(i, j) < 0 || i >= board.size() || j >= board[0].size() || vis[i][j]==true) 
            return;
        if (board[i][j] == 'X') 
            return;

        vis[i][j]=true;
        board[i][j]='2';
        for (int k=0; k<4; k++) {
            dfs(board, vis, i+idx[k], j+idy[k]);
        }
    }
    
    void solve(vector<vector<char>>& board) {
        
        vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size(), false));
        for (int i=0; i<board.size(); i++) {
            dfs(board, vis, i, 0);
            dfs(board, vis, i, board[0].size()-1);
        }
        
        for (int j=0; j<board[0].size(); j++) {
            dfs(board, vis, 0, j);
            dfs(board, vis, board.size()-1, j);
        }
        
        for (int i=0; i<board.size(); i++) {
            for (int j=0; j<board[0].size(); j++) 
            {
                if(board[i][j]=='2'){
                    board[i][j]='O';
                }
                else board[i][j]='X';
            }
        }
    }
};