class Solution {
public:
    
    
    // make two vectors row and column wise and mark them 0 if any 0 is found
    
       void setZeroes(vector<vector<int>>& mat) {
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
    
    
    
    
    