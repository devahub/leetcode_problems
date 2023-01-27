class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        
        int t=0;
        int l=0;
        int b=matrix.size()-1;
        int r=matrix[0].size()-1;
        int dir=0;
        
        
        while(t<=b && l<=r){
            if(dir==0){
                for(int i=l;i<=r;i++)
                    v.push_back(matrix[t][i]);
                t++;
                }
            else if(dir==1){
                    for(int i=t;i<=b;i++)
                        v.push_back(matrix[i][r]);
                    r--;
                    
                }
            else if(dir==2){
                for(int i=r;i>=l;i--)
                    v.push_back(matrix[b][i]);
                b--;
            }
            else if(dir==3)
            {
                for(int i=b;i>=t;i--)
                    v.push_back(matrix[i][l]);
            l++;
            }
        dir=(dir+1)%4;                  // for cyclic process
        }  
        return v;
        
    }
};