class Solution {
public:
    
    // brute force----->
    
//     int maxScoreSightseeingPair(vector<int>& values) {
//         int ans=0;
        
//         for(int i = 0; i < values.size(); i++) {
//             for(int j = i+1; j < values.size(); j++) {
//                 int score = values[i] + values[j] + i - j;
                
//                 ans = max(ans, score);
//             }
//         }
//      return ans;
//     }
// };
    
    //  dp---->
    
    int maxScoreSightseeingPair(vector<int>& values) {
        int maxi = 0;
        int bestscore = 0;
        
        for(int i = 1; i < values.size(); i++) {
            bestscore = max(bestscore, values[i-1]+i-1);            // j==i-1
            maxi = max(maxi, bestscore+values[i]-i);
        }
        
        
        return maxi;
    }
};