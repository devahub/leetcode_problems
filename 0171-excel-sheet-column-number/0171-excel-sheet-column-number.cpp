class Solution {
public:
    
// AA --> 26*1+ 1 = 27 (A == 1)
// AB --> 26*1+ 2 = 28 (B == 2)
// AC -->26*1 + 3 = 29 (C == 3)
    
    int titleToNumber(string columnTitle) {
        int i=0;
        long res=0;
        int n=columnTitle.size();
         
        while(i<n){
            res=res*26+(columnTitle[i]-'A'+1);
            i++;
        }
            
            return res;
    }
};