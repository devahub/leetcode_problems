class Solution {
public:
    
    // property of xor that 5 ^ 7 = 2 is equivalent to 5 ^ 2 = 7
    
    vector<int> findArray(vector<int>& pref) {
        int n=pref.size();
        vector<int>pr(n,0);
        
        pr[0]=pref[0];
        for(int i=1;i<n;i++){
            pr[i]=pref[i]^pref[i-1];
        }
        
        
//         vector<int>v(n,0);
//         v[0]=pref[0];
        
//         for(int i=1;i<pref.size();i++){
//             v[i]=pref[i]^pref[i+1];
//         }
        return pr;
    }
};