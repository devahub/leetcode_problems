class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string ans;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        int c=0;
        
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='-')
                continue;
            
            ans.push_back(s[i]);
            c++;
            if(c==k){
                ans.push_back('-');
                c=0;
            }
        }
        
         if(ans.back()=='-'){
            ans.pop_back();
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};