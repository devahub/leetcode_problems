class Solution {
public:
        
//   using prefix/postfix sum concept---->
        
    bool increasingTriplet(vector<int>& nums) {
        
         int n = nums.size();
        vector<int> left_min(n);
        vector<int> right_max(n);
        
       
        left_min[0] = nums[0];

        for(int i = 1; i < n; i++)
        {
            left_min[i] = min(left_min[i - 1], nums[i]);
        }
        
       

        right_max[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--)
        {
            right_max[i] = max(right_max[i + 1], nums[i]);
        }
        
        

        for(int i = 1; i < n - 1; i++)
        {
            if(left_min[i - 1] < nums[i] && nums[i] < right_max[i + 1])
            {
                return true;
            }
        }
        
        return false;
    }
};




//         int first=INT_MAX;
//         int second=INT_MAX;
    
        
//        for(auto x:nums){
//            if(x<first){
//                first=x;
//            }
//            else if(first<x && x<second){
//                second=x;
//            }
//            else if(x>second){
//                return true;
//            }
           
//        }
//         return false;
//    }
//};