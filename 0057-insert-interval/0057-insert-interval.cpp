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

    
    vector<vector<int>> insert(vector<vector<int>>& inter, vector<int>& newi) {
        vector<vector<int>>res;
        int n=inter.size();
        
        
        for(int i=0;i<n;i++){
            if(inter[i][1]<newi[0]){
                res.push_back(inter[i]);
            }
            else if(inter[i][0]>newi[1]){
                res.push_back(newi);
                newi=inter[i];
            }
            else if(inter[i][1] >= newi[0] || inter[i][0] <= newi[1])
            {
                newi[0] = min(inter[i][0], newi[0]);
                newi[1] = max(newi[1], inter[i][1]);

            }
        }
        
        res.push_back(newi); 
        return res;  
        
    }
};