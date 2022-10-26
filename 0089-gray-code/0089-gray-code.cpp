class Solution {
public:
    vector<string>solve(int n){
       if(n == 1) 
            return {"0" , "1"}; 
        
        vector<string> v = solve(n - 1);
        vector<string>codes;
        
        for(int i = 0 ; i < v.size() ; i++) 
            codes.push_back("0" + v[i]);
        
        for(int i = v.size() - 1 ; i >= 0 ; i--) 
            codes.push_back("1" + v[i]);
        
        return codes;
    }
    
    
    
    vector<int> grayCode(int n) {
        vector<int>v;
        
        
        for(string s:solve(n)){
            v.push_back(stoi(s , 0 , 2)); // converting string-binary-num to int : "100" = 4
        }
    return v;
    }
};




