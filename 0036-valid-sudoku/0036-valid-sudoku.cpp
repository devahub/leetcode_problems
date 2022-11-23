class Solution {
public:
    bool check(vector<vector<char>>& board,int row,int col){
        
        int c=board[row][col];
        board[row][col] = '.';                      
        
        for(int i=0;i<9;i++){
            if(c==board[i][col]){               //check for column
               return false;
                    }
           if(c==board[row][i]){                //check for row
               return false;
           }
           if(board[3*(row/3)+i/3][3*(col/3)+i%3] == c){            //check in the 3*3 box
               return false;
           }
        }
        board[row][col]=c;
        return true;
        
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]!='.')
                {
                    if(!check(board,i,j)){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};