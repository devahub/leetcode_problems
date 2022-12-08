class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& first, vector<vector<int>>& second) {
     
        vector<vector<int>>ans;
        int i=0;
        int j=0;
        
       while(i<first.size() && j<second.size()){
            int l=max(first[i][0], second[j][0]);
            int u=min(first[i][1], second[j][1]);
           
           if(l<=u){
               ans.push_back({l,u});
           }
            if(first[i][1] < second[j][1])  
            {
                i++;
            }
            else{
                j++;
            }
       } 
        return ans;
    }
};