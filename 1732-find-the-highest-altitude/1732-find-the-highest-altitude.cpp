class Solution {
public:
    
    
    
    int largestAltitude(vector<int>& gain) {
       int maxi=INT_MIN;
        int n=gain.size();
        
        vector<int>v(n+1,0);
        int j=1;
        
        for(int i=0;i<n;i++){
            v[j]=v[j-1]+gain[i];
            j++;
        }
        
        for(auto i:v){
            maxi=max(maxi,i);
        }
        
        return maxi;
    }
};