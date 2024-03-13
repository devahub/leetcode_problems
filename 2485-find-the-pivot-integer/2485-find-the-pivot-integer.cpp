class Solution {
public:
    int pivotInteger(int n) {
        
         int total=0;
        for(int i=1;i<=n;i++){
            total+=i;
        }
        
        
        int sum=0,j;
        
        for(j=1;j<=n;j++){
           
            sum+=j;
            if(sum==total-sum+j){
                return j;
            }
        }
        return -1;
        
        
        
    }
};