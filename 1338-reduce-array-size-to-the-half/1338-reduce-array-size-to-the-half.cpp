class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>mp;
        vector<int>v;
        
        for(auto i:arr)mp[i]++;
        
        for(auto i:mp)v.push_back(i.second);
        
        sort(v.begin(),v.end());
        int res=0;
        int i=v.size()-1;
        int c=0;
        
        
        while(res<n/2){
            c+=1;
            res=res+v[i];
            i--;
        }
        return c;
        
        
    }
};