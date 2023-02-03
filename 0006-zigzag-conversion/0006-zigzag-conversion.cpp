class Solution {
public:
  /*n=numRows

Δ=2n-2    1                           2n-1                         4n-3
Δ=        2                     2n-2  2n                    4n-4   4n-2
Δ=        3               2n-3        2n+1              4n-5       .
Δ=        .           .               .               .            .
Δ=        .       n+2                 .           3n               .
Δ=        n-1 n+1                     3n-3    3n-1                 5n-5
Δ=2n-2    n                           3n-2                         5n-4

*/



 string convert(string s, int numRows) {
        vector<string> v(numRows, "");
        int i =0;
        int n = s.length();
     
    
        while(i<n){
            
            for(int j =0; j<numRows && i<n; j++ ){    /// horizontal moves
                v[j].push_back(s[i++]);
            }
            
            for(int j =numRows-2; j>=1 && i<n; j--){            //diagonal moves
                v[j].push_back(s[i++]);
            }
        }
        
     
        string res ="";
        for(auto i : v){
            res+=i;
        }
        return res;
    }
};
