class Solution {
public:
    
    
    int maximumBags(vector<int>& cap, vector<int>& rocks, int addrocks) {
        int n=cap.size();
        vector<int>v(n);
        
        for(int i=0;i<cap.size();i++){
            v[i]=cap[i]-rocks[i];
        }
        
        sort(v.begin(),v.end());
        
        int t=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                t++;
            }
            else if(addrocks-v[i]>=0){
                t++;
                addrocks-=v[i];
            }
            
        }
        return t;
    }
};