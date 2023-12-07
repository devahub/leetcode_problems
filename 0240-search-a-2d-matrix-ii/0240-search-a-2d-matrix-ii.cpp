class Solution {
public:
  bool searchMatrix(vector<vector < int>> &mat, int target)
       	        {

       	            int m = mat.size();
       	            int n = mat[0].size();

       	            for (int row = 0; row < m; row++)
       	            {
       	                int i = 0;
       	                int j = n - 1;

       	                while (i <= j)
       	                {
       	                    int mid = i + (j - i) / 2;
       	                    if (mat[row][mid] == target) 
                                    return true;
       	                    else if (mat[row][mid] > target)
                                    j = mid - 1;
       	                    else i = mid + 1;
       	                }
       	            }
       	            return false;
       	        }
       	};
