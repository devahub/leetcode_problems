class Solution {
public:
    
    
//      vector<vector<int>>dp;
    
    
//     int solve(vector<int>& heights, int bricks, int ladders,int i){
        
        
//         if(i == heights.size()-1) return 0;
        
//         if(bricks == 0 && ladders == 0 && heights[i+1] > heights[i]) return 0;

        
        
//         if(dp[bricks][ladders] != 0)
//         {
//             return dp[bricks][ladders];
//         }
        
//        if(heights[i+1]<=heights[i]){
//            return 1+solve(heights,bricks,ladders,i+1);
//        }
//         int byBricks = 0, byLadder = 0;
        
//         if(heights[i+1] - heights[i]<=bricks){
//             byBricks= 1+solve(heights,bricks - (heights[i+1] - heights[i]),ladders,i+1);      
//         }
        
        
//         if(ladders > 0){
//             byLadder = 1 + solve(heights, bricks, ladders-1, i+1);
//         }
        
        
//         return dp[bricks][ladders] = max(byBricks, byLadder);

        
        
//     }
    
    
    
//     int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
//         dp.resize(bricks+1, vector<int> (ladders+1, 0));
//         return solve(heights, bricks, ladders,0);
        
//     }
    
    
    
    
   ////   Always remember------> GREEDY >>>> DP ( Sorry DP lovers )
    
// Because for DP either you might require O(n^2) or 
// we have to do this in O(nlogn) or lower time.
// sometime for 3D dp O(n^3) time. 

// But in greedy which mostly work by sorting data it will be 
// in O(n*logn). 

// If you closely check the input size is 10^5 so for sure 
    
    
    int furthestBuilding(vector<int>& heights, int bricks, int ladders){
       
        
              // Priority Queue for storing the bricks used in each step in decreasing order (Max at top)
        priority_queue<int> maxB;
    
        int i=0, diff =0; // i is used for storing the position and diff for storing difference.
        for(i=0; i<heights.size()-1; i++){ // go till before the last building.
            
            //difference of the height of corresponding buildings
            diff = heights[i+1]-heights[i];
            
            //If next building is equal or samaller than current then go to next building.
            if(diff <= 0){
                continue;
            }

            bricks -= diff; //taking the bricks needed for going to next building.
            maxB.push(diff); //adding the number of bricks used in priority queue.
            
            // if bricks become negetive then there were not enough bricks. So add a ladder in place of the step where most bricks were used.
            if(bricks < 0){
                bricks += maxB.top(); //taking back bricks from that step
                maxB.pop(); //As max bricks were removed so pop
                ladders--; //1 ladder used
            }

            //if ladder is negetive then the ladder was not provided to go to next building. So we can't proceed.
            if(ladders < 0) break;
        }
        
        // return the present position.
        return i;
        
        
    }
     
};