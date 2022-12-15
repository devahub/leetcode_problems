class Solution {
public:
   
    
    // using backtracking
    
 vector<string>v = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    
    void generate(string digits,string temp,int start,vector<string> &ans)
    {
        if(temp.size()==digits.size())
        {
            ans.push_back(temp);
            return;
        }
        
        for(auto i : v[digits[start]-'0'])
        {
            temp.push_back(i);
            generate(digits,temp,start+1,ans);
            temp.pop_back();
        }
    }
    
vector<string> letterCombinations(string digits) {
      vector<string> ans;
    
        if(digits.size()==0)
        {
            return ans;
        }
    
        string temp = "";
        generate(digits,temp,0,ans);
        return ans;
    }
};
    
    
    
    // using bfs----->iterative----->
    
//     vector<string> letterCombinations(string digits) {
//         vector<string> phone = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         if(digits.empty())
//             return {};
        
//         queue<string> q;
//         vector<string> ans;
        
//         q.push("");

//         while(!q.empty()){
//             string s = q.front();
//             q.pop();
            
//             if(s.length() == digits.length())
//                 ans.push_back(s);
//             else{
//                 string temp = phone[digits[s.length()] - '0'];
//                 for(auto i : temp)
//                     q.push(s + i);
//             }
//         }
//         return ans;
//     }
// };
    