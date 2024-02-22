class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if (n == 1) return 1;
        unordered_map<int,int>mp;
        unordered_map<int,int>np;
        
        for(int i=0;i<trust.size();i++){
            mp[trust[i][0]]++;
        }
        for(int i=0;i<trust.size();i++){
            np[trust[i][1]]++;
        }
        
        for(int i=0;i<=n;i++)
        {
            if(mp[i]==0 && np[i]==n-1){
             return i;   
            }
        }        
        return -1;
    }
};