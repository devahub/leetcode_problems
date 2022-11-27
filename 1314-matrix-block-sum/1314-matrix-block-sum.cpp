class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        
        for(int r=0;r<m;r++){
			for(int c=0;c<n;c++){
				int sum=0;
                
				for(int i=max(r-k,0);i<=min(r+k,m-1);i++){
					for(int j=max(c-k,0);j<=min(c+k,n-1);j++){
						sum+=mat[i][j];
					}
				}
				ans[r][c]=sum;
			}
		}
        return ans;
    }
};