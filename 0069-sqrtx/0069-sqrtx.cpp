class Solution {
public:
    int mySqrt(int x) {
        
        long long low=0;
        long long high=INT_MAX;
        long long ans=0;
        
        while(low<=high){
            long long m=low+(high-low)/2;
            if(m*m<=x){
                ans=m;
                low=m+1;
            }
            else {
                high=m-1;
            }  
        }
        return ans;
    }
};