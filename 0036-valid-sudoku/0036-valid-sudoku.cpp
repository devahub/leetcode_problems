class Solution {
public:
    
    // brute force---->
    
//     bool check(vector<vector<char>>& board,int row,int col){
        
//         int c=board[row][col];
//         board[row][col] = '.';                      
        
//         for(int i=0;i<9;i++){
//             if(c==board[i][col]){               //check for column
//                return false;
//                     }
//            if(c==board[row][i]){                //check for row
//                return false;
//            }
//            if(board[3*(row/3)+i/3][3*(col/3)+i%3] == c){            //check in the 3*3 box
//                return false;
//            }
//         }
//         board[row][col]=c;
//         return true;
        
//     }
    
//     bool isValidSudoku(vector<vector<char>>& board) {
        
//         for(int i=0;i<9;i++){
//             for(int j=0;j<9;j++){
//                 if(board[i][j]!='.')
//                 {
//                     if(!check(board,i,j)){
//                         return false;
//                     }
//                 }
//             }
//         }
//         return true;
//     }
// };
    
    
    
    
    
    // using set--->
    
    bool isValidSudoku(vector<vector<char>>& board){
        vector<set<int>>rows(9);
        vector<set<int>>cols(9);
        vector<set<int>>blocks(9);
        
        
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                
                if (board[i][j] == '.') continue;
                
                int curr = board[i][j] - '0';
                if (rows[i].count(curr) || cols[j].count(curr) ||       blocks[(i/3)*3+j/3].count(curr)) 
                     return false;
                
                rows[i].insert(curr);
                cols[j].insert(curr);
                blocks[(i/3)*3+j/3].insert(curr);
            }
        }
        
        return true;
        
    }
};