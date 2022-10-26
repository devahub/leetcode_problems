class Solution {
public:
//     vector<string>solve(int n){
//        if(n == 1) 
//             return {"0" , "1"}; 
        
//         vector<string> v = solve(n - 1);
//         vector<string>codes;
        
//         for(int i = 0 ; i < v.size() ; i++) 
//             codes.push_back("0" + v[i]);
        
//         for(int i = v.size() - 1 ; i >= 0 ; i--) 
//             codes.push_back("1" + v[i]);
        
//         return codes;
//     }
    
    
    
//     vector<int> grayCode(int n) {
//         vector<int>v;
        
        
//         for(string s:solve(n)){
//             v.push_back(stoi(s , 0 , 2)); // converting string-binary-num to int : "100" = 4
//         }
//     return v;
//     }
// };



// another approach--->
    
    vector<int> grayCode(int n) {
        vector<int>ans;
        ans.push_back(0);
        if(n == 0) return ans;
        ans.push_back(1);
        
        int curr = 1;
        for(int i = 2; i <= n; i++){
          curr*=2;
            for(int j = ans.size()-1; j >= 0; j--) 
                ans.push_back(curr+ans[j]);
        }    
        return ans;
    }
};
