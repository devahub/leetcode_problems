class Solution {
public:
//     vector<string> letterCasePermutation(string s) {
//         vector<string>ans;
        
//         string str="";
//         solve(s,ans,str,0);
//         return ans;
//     }
    
    
//     void solve(string s,vector<string>&ans,string str,int i){
        
//         if(i==s.size()){
//          ans.push_back(str);   
//         }
        
//         if(!isdigit(s[i])){
//             if(isupper(s[i])){
//                 solve(s,ans,str+s[i],i+1);
//                 solve(s,ans,str+(char)tolower(s[i]),i+1);
//             }
//             if(islower(s[i])){
//                 solve(s,ans,str+s[i],i+1);
//                 solve(s,ans,str+(char)toupper(s[i]),i+1);
//             }
//         }
//            else{
//                solve(s,ans,str+s[i],i+1);
//            }
        
//     }
// };


//  better code quality--->
            

        void solve(string s, vector<string>&ans,int i) {
        if(i == s.size()) { 
            ans.push_back(s);
            return;
        }
        
        if(isalpha(s[i])) {                 // if it is an alphabet
            s[i] = toupper(s[i]);
            solve(s,ans,i+1);
            s[i] = tolower(s[i]);
            solve(s,ans,i+1);
        }
        else {
            solve(s,ans,i+1);           // do nothing for digits
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        solve(s,ans,0);
        return ans;
    }
};





