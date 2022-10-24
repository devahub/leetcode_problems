class Solution {
public:
    int sol;
    void solve(vector<string>& arr, vector<int>& v, int i, int &ans)
    {
        if(i==arr.size())
        {
            sol=max(sol, ans);
            return;
        }
        
        //recursive without adding string
        solve(arr, v, i+1, ans);
        
        
        for(int k=0; k<arr[i].length(); k++)
        {
            if(v[arr[i][k]-'a']>0)
            {
                for(int j=0; j<k; j++)
                    v[arr[i][j]-'a']--;
                return;
            }
            v[arr[i][k]-'a']++;
        }
        ans+=arr[i].length();
        
        solve(arr,v, i+1, ans);
        
        //backtracking
        ans-=arr[i].length();
        for(int k=0; k<arr[i].length(); k++)
        {
            v[arr[i][k]-'a']--;
        }
    }
    
    
    int maxLength(vector<string>& arr) {
        sol=0;
        int ans=0;
        vector<int>v(26,0);
        solve(arr,v,0,ans);
        return sol;
    }
};