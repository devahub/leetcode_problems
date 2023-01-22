class Solution {
public:
   bool repeatedSubstringPattern(string s) {
        int n = s.size();
        string s1 = "", s2 = "";
        for(int i=1; i<=n/2; i++) {
            if (n%i == 0) {
                s1 = s.substr(0, i);
                s2 = "";
                for(int j=0; j<n/i; j++) {
                    s2 += s1;
                }
                
                if(s==s2) return true;
            }
        }
		return false;
    }
};