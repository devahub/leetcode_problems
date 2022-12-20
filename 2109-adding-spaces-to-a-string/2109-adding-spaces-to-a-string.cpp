class Solution {
public:
    
    
    string addSpaces(string s, vector<int>& spaces) {
        string s2="";
        int j=0;
        for(int i=0;i<s.size();i++){
            
            if(j<spaces.size() && spaces[j]==i){
                s2+=' ';
                j++;
            }
            s2+=s[i];
        }
        
        return s2;  
    }
};