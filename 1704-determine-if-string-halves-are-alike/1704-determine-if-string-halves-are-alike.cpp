class Solution {
public:
    bool halvesAreAlike(string s) {
        int i=0;
        int j=s.size()-1;
        int c=0;
        int t=0;
        
        string ch="aeiouAEIOU";
        
        while(i<j){
            if(ch.find(s[i])<ch.size()){
                c++;
            }
            if(ch.find(s[j])<ch.size()){
                t++;
            }
            i++;
            j--;
        }
        return c==t;
        
    }
};