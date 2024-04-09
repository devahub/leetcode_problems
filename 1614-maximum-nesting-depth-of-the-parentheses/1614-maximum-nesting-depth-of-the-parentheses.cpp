class Solution {
public:
    int maxDepth(string s) {
        int c=0;
        int maxc=0;
        
        
        
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                c++;
                if (maxc < c)maxc = c;
            
            }
            
            else if(s[i]==')'){
                c--;
            }
        }
        return maxc;
    }
};