class NumMatrix {
public:
    
    
    // brute force----->
    
//     vector<vector<int>>ans;
//     NumMatrix(vector<vector<int>>& matrix) {
//         ans=matrix;
    
//     }
    
//     int sumRegion(int row1, int col1, int row2, int col2) {
//        int sum=0;
//         for(int i=row1;i<=row2;i++){
//             for(int j=col1;j<=col2;j++){
//                 sum+=ans[i][j];
//             }
//         }
//         return sum;
//     }
// };

    
    // optimal solution------>
    
    vector<vector<int>>mat;
    NumMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();       
        int col=matrix[0].size();
        
        for(int i=0;i<row;i++)
        {
            for(int j=1;j<col;j++)
            {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        
        
         for(int i=1;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                matrix[i][j]+=matrix[i-1][j];
            }
        }
        mat=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int total=mat[row2][col2];
        int extrasum=(col1!=0?mat[row2][col1-1]:0)+(row1!=0?mat[row1-1][col2]:0)
            -((row1!=0 && col1!=0)?mat[row1-1][col1-1]:0);
            
        return total-extrasum;
    }
};
