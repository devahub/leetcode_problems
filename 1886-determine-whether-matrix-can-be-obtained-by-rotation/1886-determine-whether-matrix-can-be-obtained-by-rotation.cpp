class Solution
{
    public:
//         bool findRotation(vector<vector < int>> &mat, vector< vector< int>> &target)
//         {
//             int n = mat.size();
//             if (mat == target)
//             {
//                 return true;
//             }
//             int c = 3;

//             while (c--)
//             {
//                 for (int i = 0; i < n; i++)
//                 {
//                     for (int j = i; j < n; j++)
//                     {
//                         swap(mat[i][j], mat[j][i]);
//                     }
//                 }
//                 for (int i = 0; i < n; i++)
//                 {
//                     reverse(mat[i].begin(), mat[i].end());
//                 }
//                 if (mat == target)
//                 {
//                     return true;
//                 }
//             }

//             return false;
//         }
// };

    
    
    
    
    
    ///   approach----->2
    
    
     bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if(mat==target) return true;
        int n=mat.size();
        int cnt=3;
        while(cnt--){
            for (int i = 0; i < n / 2; i++) {
                for (int j = i; j < n - i - 1; j++) {
                    int temp = mat[i][j];
                    mat[i][j] = mat[n - 1 - j][i];
                    mat[n - 1 - j][i] = mat[n - 1 - i][n - 1 - j];
                    mat[n - 1 - i][n - 1 - j] = mat[j][n - 1 - i];
                    mat[j][n - 1 - i] = temp;
                }
            }
            if(mat==target) return true;
        }
        return false;
    }
};
