class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n,vector<int>(n)); 
    
        int t=0,b=n-1,l=0;
        int r=n-1;
        int c=1;
        
        while(t<=b && l<=r){
                
            for(int i=l;i<=r;i++){
                    ans[t][i]=c;
                    c++;
                }
            t+=1;
            
            for(int i=t;i<=b;i++){
                ans[i][r]=c;
                c++;
                }
            r-=1;
            
            for(int i=r;i>=l;i--){
                ans[b][i]=c;
                c++;
            }
            b-=1;
            
            for(int i=b;i>=t;i--){
                ans[i][l]=c;
                c++;
            }
            l+=1;
                                                  
        }
        return ans;
    }
};