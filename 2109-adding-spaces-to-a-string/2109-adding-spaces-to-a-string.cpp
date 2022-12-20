class Solution {
public:
    
    
//     string addSpaces(string s, vector<int>& spaces) {
//         string s2="";
//         int j=0;
//         for(int i=0;i<s.size();i++){
            
//             if(j<spaces.size() && spaces[j]==i){
//                 s2+=' ';
//                 j++;
//             }
//             s2+=s[i];
//         }
        
//         return s2;  
//     }
// };
    
    
    
    
     string addSpaces(string s, vector<int>& spaces) {
        
        int i,n=spaces.size(),m=s.size(),j;
        string ans="";
        i=0;
        j=0;
        
       
        while(i<m)
        {
            
            if(j<n && i==spaces[j])
            {
                ans+=" ";
                j++;
            }
            ans+=s[i];
            i++;
        }
        
        return ans;
    }
};