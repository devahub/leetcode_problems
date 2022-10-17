class Solution {
public:
    
    
    // Casee 1:- No overlap

//  _______________        ________________
// | left interval |      | right interval |
// |_______________|      |________________|

//Case 2:- Partial overlap

//  _______________
// | left interval |
// |_______________|
//            ________________
//           | right interval |
//           |________________|

// Case 3:- Full overlap

//  _____________________
// |    left interval    |
// |_____________________|
//    ________________
//   | right interval |
//   |________________|

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans;
        
       
        
        sort(intervals.begin(),intervals.end());
        
        ans.push_back(intervals[0]);
        
        int j=0;
        for(int i=1;i<intervals.size();i++){
            if(ans[j][1]>=intervals[i][0])
                ans[j][1]=max(ans[j][1],intervals[i][1]);
            
            else{
                j++;
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
    
    
    
    
    
    
    