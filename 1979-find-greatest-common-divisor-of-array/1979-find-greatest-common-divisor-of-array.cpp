class Solution {
public:
    
     int gcdnum(int a,int b)
        {
        if(b==0)                // base case
            return a;
        return gcdnum(b,a%b);
         }
    
    
    int findGCD(vector<int>& nums) {
        int mini=INT_MAX;
        int maxi=INT_MIN;
        
       for(auto i:nums){
           mini=min(mini,i);
           maxi=max(maxi,i);
       }
        return gcdnum(mini,maxi);
    }
};