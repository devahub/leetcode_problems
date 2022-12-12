class Solution {
public:
//     int idx[4]={0,1,-1,0};
//     int idy[4]={1, 0, 0, -1};
    
//     void dfs(vector<vector<char>>& board,vector<vector<bool>>&vis,int i,int j){
    
//         if (min(i, j) < 0 || i >= board.size() || j >= board[0].size() || vis[i][j]==true) 
//             return;
        
//         if (board[i][j] == 'X') 
//             return;

//         vis[i][j]=true;
//         board[i][j]='1';
//         for (int k=0; k<4; k++) {
//             dfs(board, vis, i+idx[k], j+idy[k]);
//         }
//     }
    
    
//     void solve(vector<vector<char>>& board) {
        
//         vector<vector<bool>> vis(board.size(), vector<bool>(board[0].size(), false));
        
//         for (int i=0; i<board.size(); i++) {      // make boundary rows 
//             dfs(board, vis, i, 0);              
//             dfs(board, vis, i, board[0].size()-1);
//         }
        
//         for (int j=0; j<board[0].size(); j++) {
//             dfs(board, vis, 0, j);
//             dfs(board, vis, board.size()-1, j);
//         }
        
//         for (int i=0; i<board.size(); i++) {
//             for (int j=0; j<board[0].size(); j++) 
//             {
//                 if(board[i][j]=='1'){    // if visited and touching boundary mark it as O
//                     board[i][j]='O';
//                 }
//                 else board[i][j]='X';     // not touching boundary
//             }
//         }
//     }
// };

    
    
    
    
    // same approach--->dfs called differently---->
    


    void dfs(vector<vector<char>>& board, int i, int j){
        if(i<0||i>=board.size()||j<0||j>=board[0].size())
            return;
        if(board[i][j]!='O')
            return;
        
        board[i][j]='1';
        
        dfs(board,i+1,j);
        dfs(board,i,j+1);
        dfs(board,i-1,j);
        dfs(board,i,j-1);
        return;
    }



void solve(vector<vector<char>>& board) {
        if(board.size()==0||board[0].size()==0)
            return;
    
        for(int i=0;i<board[0].size();i++){
            if(board[0][i]=='O'){
                dfs(board,0,i);}
            if(board[board.size()-1][i]=='O'){
                dfs(board,board.size()-1,i);}
        }
        for(int i=1;i<board.size()-1;i++){
            if(board[i][0]=='O')
                dfs(board,i,0);
            if(board[i][board[0].size()-1]=='O'){
                dfs(board,i,board[0].size()-1);}
        }
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]!='1')
                    board[i][j]='X';
                if(board[i][j]=='1')
                    board[i][j]='O';
            }
        }
    }
};
    
    
