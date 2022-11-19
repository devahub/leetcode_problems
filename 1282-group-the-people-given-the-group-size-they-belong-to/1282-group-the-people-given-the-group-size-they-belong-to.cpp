class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>>ans;
        unordered_map<int,vector<int>>mp;
        
        for(int i=0;i<n;i++){
            mp[groupSizes[i]].push_back(i);
        }
        
         for(auto j:mp){
            
             int c=0;
			 vector<int> arr=j.second;
			 vector<int> v;
            
            
			 for(int i=0;i<arr.size();i++){
				 v.push_back(arr[i]);
				 c++;
				 if(c==j.first){
					 ans.push_back(v);
					 c=0;
					 v.clear();
				 }
			 }
		 }
        
        
        
        return ans;
    }
};