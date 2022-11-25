class Solution {
public:
//     vector<int> getRow(int rowIndex) {
//         vector<vector<int>>ans(rowIndex+1);
        
//         for(int i=0;i<=rowIndex;i++){
//             ans[i].resize(i+1);
//             ans[i][0]=ans[i][i]=1;
            
//         for(int j=1;j<i;j++)
//             ans[i][j]=ans[i-1][j-1]+ans[i-1][j];
//         }
//     return ans[rowIndex];
//     }
// };
    
    
    
    
    vector<int> getRow(int n){
       vector<vector<int>> ans;
     for(int i=0;i<=n;i++){
         vector<int>row(i+1,1);
         for(int j=1;j<i;j++)
             row[j]=ans[i-1][j-1]+ans[i-1][j];
         ans.push_back(row);
     }
     return ans[n];
    }
};
    
    