class Solution {
public:
    
    
    string reverseVowels(string s) {
        vector<int>v;
        
        string temp="";
        
        
        for(int i=0;i<s.size();i++){
            if(s[i] == 'a' || s[i] == 'e'|| s[i] == 'i'|| s[i] == 'o'|| s[i] == 'u'
                 || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                        temp+=s[i];
                        v.push_back(i);
                        
                    }
        }
        reverse(temp.begin(),temp.end());
        
        for(int i=0;i<v.size();i++){
            s[v[i]]=temp[i];
        }
            
        
        
        
        return s;
    }
};