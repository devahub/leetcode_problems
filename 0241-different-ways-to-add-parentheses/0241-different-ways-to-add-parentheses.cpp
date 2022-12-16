class Solution {
public:
    

    
    vector<int> diffWaysToCompute(string exp) {
        vector<int>v;
        
        for(int i=0;i<exp.size();i++){
            if(exp[i]=='+' || exp[i]=='-' || exp[i]=='*'){
                vector<int>left=diffWaysToCompute(exp.substr(0,i));
                vector<int>right=diffWaysToCompute(exp.substr(i+1));
                
               for(int j=0; j<left.size(); j++){
                    for(int k=0; k<right.size(); k++){
                        
                        if(exp[i] == '+'){
                            v.push_back(left[j]+right[k]);
                        }
                        else if(exp[i] == '-'){
                            v.push_back(left[j]-right[k]);
                        }
                        else{
                            v.push_back(left[j]*right[k]);
                        }
                        
                        
                    }
               }
            }
        }
         if(v.empty()){  
            v.push_back(stoi(exp));
        }
        return v;
    }
};