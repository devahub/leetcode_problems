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
    




            // approach ---2
// vector<vector<int>> merge(vector<vector<int>>& v) 
//     {
        
//         sort(v.begin(),v.end());
//         int n=v.size();
//         int left=0;
//         int right=1;
//         vector<vector<int>>ans; 
//         while(left<n && right<n)
//         {
//             // Case 1(No overlap so proceed)
//             if(v[left][1]<v[right][0])
//             {
//                 left=right;
//                 right++;
//             }
            
//             else
//             {
          
//                 if(v[left][1]>=v[right][1])
//                 {
                   
//                     v[right]={-1,-1};
//                     right++;
//                 }
               
//                 else
//                 {
                    
//                     v[left][1]=v[right][1];
                  
//                     v[right]={-1,-1};
//                     right++;
//                 }
//             }
//         }
       
//         for(int i=0;i<n;i++)
//         {
            
//             if(v[i][0]!=-1)
//             {
//                 ans.push_back(v[i]);
//             }
//         }
        
//         return ans;
//     }
// };
    
    
    
    
    
    