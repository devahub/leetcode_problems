class Solution {
public:
    
    
    // make two vectors row and column wise and mark them 0 if any 0 is found
    
//        void setZeroes(vector<vector<int>>& mat) {
//         int m=mat.size();
//         int n=mat[0].size();
           
//         vector<int>r(m,-1);
//         vector<int>c(n,-1);
           
//            for(int i=0;i<m;i++){
//                for(int j=0;j<n;j++){
//                    if(mat[i][j]==0){
//                        r[i]=0;
//                        c[j]=0;
//                    }
//                }
//            }
           
           
//          for(int i=0;i<m;i++){
//              for(int j=0;j<n;j++){
//                  if(r[i]==0 || c[j]==0){
//                      mat[i][j]=0;
//                  }
//              }
//          }     
//      } 
// };
    
    
    
    
   // without space=====>
    
//       void setZeroes(vector<vector<int>>& matrix) {
//           int colm=1,rows=matrix.size(),col=matrix[0].size();
          
          
//         for(int i=0;i<rows;i++)
//         {
//         if(matrix[i][0]==0) colm=0;
//           for(int j=1;j<col;j++)
//          {
//             if(matrix[i][j]==0)
//                 matrix[i][0]=matrix[0][j]=0;
            
//          }
//         }
//         for(int i=rows-1;i>=0;i--)
//         {
//             for(int j=col-1;j>=1;j--)
//             {
//                 if(matrix[i][0]==0 || matrix[0][j]==0)
//                     matrix[i][j]=0;
                
                
//             }
//             if(colm==0) matrix[i][0]=0;
            
        
//         }
          
          
          
          
//       }
// };
    
    
    
    
    
    void setZeroes(vector<vector<int>>& mat){
        
        int m=mat.size();
        int n=mat[0].size();
        
        
        vector<int>r(m,-1);
        vector<int>c(n,-1);
        
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
                
            }
            
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(r[i]==0 || c[j]==0){
                    mat[i][j]=0;
                }
                
            }
            
        }
   
    }
};