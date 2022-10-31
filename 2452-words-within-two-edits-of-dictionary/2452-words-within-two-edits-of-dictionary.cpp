class Solution {
public:
    int count(string &a, string &b){
        int k = 0;
        for(int i=0; i<a.size(); i++){
            if(a[i]!=b[i])  k++;
        }
        return k;
    }
    
    vector<string> twoEditWords(vector<string>& q, vector<string>& d) {
        int n=q.size();
        int m=d.size();
        vector<string>ans;
        
        for(int i=0;i<n;i++){
            string s=q[i];
            for(int j=0;j<m;j++){
                string b=d[j];
                int check = count(s, b);
                if(check<=2){
                    ans.push_back(s);
                    break;
                }
            }
            
        }
        return ans;
    }
};