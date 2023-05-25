class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
         vector<vector<int>>ans;
         ans.push_back(intervals[0]);
        int j=0;
        
          
        for(int i=1;i<intervals.size();i++){
            if(ans[j][1]>=intervals[i][0])   // if merges ----->
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            
            else{                       // if not merges push it into the ans vector
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};