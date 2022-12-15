class Solution {
public:



    bool dfs(vector<vector<char>>& board, string word,int x,int y,int idx){
     
        if(idx==word.size())
            return true;            // base condition
        
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
    
    
    
    
    
//     int n, m;
//     vector<vector<bool>> vis;
//     bool dfs(vector<vector<char>> &board, string word, int i, int j, int index)
//     {
//         if(board[i][j] == word[index])
//         {
//             vis[i][j] = true;
            
//             if(index == word.size() - 1)
//                 return true;
            
//             if(i-1 >= 0 && vis[i-1][j] == false)
//                 if(dfs(board, word, i-1, j, index+1))
//                     return true;
//             if(i+1 < n && vis[i+1][j] == false)
//                 if(dfs(board, word, i+1, j, index+1))
//                     return true;
//             if(j-1 >= 0 && vis[i][j-1] == false)
//                 if(dfs(board, word, i, j-1, index+1))
//                     return true;
//             if(j+1 < m && vis[i][j+1] == false)
//                 if(dfs(board, word, i, j+1, index+1))
//                     return true;
            
//             vis[i][j] = false;
//             return false;
//         }
//         return false;
//     }
    
    
// public:
//     bool exist(vector<vector<char>>& board, string word) {
//         n = board.size();
//         m = board[0].size();
//         vis=vector<vector<bool>>(n, vector<bool>(m, false));
        
//         for(int i=0; i<n; i++)
//             for(int j=0; j<m; j++)
//             {
//                 if(dfs(board, word, i, j, 0))
//                     return true;
//             }
//         return false;
//     }
// };