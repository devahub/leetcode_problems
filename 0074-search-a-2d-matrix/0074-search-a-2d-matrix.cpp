class Solution
{
    public:
       	// brute force------>

       	//     bool searchMatrix(vector<vector<int>>& matrix, int target){

       	//         for(int i=0;i < matrix.size();i++){
       	//             for(int j=0;j < matrix[0].size();j++){
       	//                 if(matrix[i][j]==target){
       	//                     return true;
       	//                 }
       	//             }
       	//         }

       	// return false;    
       	//     }
       	// };
    
    
    
    
    

       	// binary search technique--------->do binary search in each row

       	//         bool searchMatrix(vector<vector < int>> &mat, int target)
       	//         {

       	//             int m = mat.size();
       	//             int n = mat[0].size();

       	//             for (int row = 0; row < m; row++)
       	//             {
       	//                 int i = 0;
       	//                 int j = n - 1;

       	//                 while (i <= j)
       	//                 {
       	//                     int mid = i + (j - i) / 2;
       	//                     if (mat[row][mid] == target) 
        //                             return true;
       	//                     else if (mat[row][mid] > target)
        //                             j = mid - 1;
       	//                     else i = mid + 1;
       	//                 }
       	//             }
       	//             return false;
       	//         }
       	// };

    
    
    
    
    
       	// optimal technique---> 
    
// Traverse using while loop till i is less than n and j is greater than equal to zero.
// if mat[i][j] == 0 return true;
// if greater than it means the element exists in another row therefore increment i.
// if less than decrement j because this means element exist in that row only.
// at end if not found return false.
    
    
    
    
        bool searchMatrix(vector<vector < int>> &mat, int target)
        {
            int m = mat[0].size();
            int n = mat.size();
            int j = m - 1;
            int i = 0;

            while (i < n && j >= 0)
            {
                if (mat[i][j] == target)
                {
                    return true;
                }
                else if (mat[i][j] > target)
                {
                    j--;
                }
                else
                {
                    i++;
                }
            }

            return false;
        }
};