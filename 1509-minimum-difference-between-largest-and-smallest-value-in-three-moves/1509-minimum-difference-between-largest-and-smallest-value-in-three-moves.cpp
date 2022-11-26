class Solution
{
    public:
//         int minDifference(vector<int> &nums)
//         {
//             int n = nums.size();
//             if (n <= 3)
//             {
//                 return 0;
//             }
//             sort(nums.begin(), nums.end());

//             int mini = INT_MAX;

//             for (int i = 0; i < 4; i++) {
//                 mini=min(mini,nums[n-1-i]-nums[3-i]);
                
//             }
//             return mini;
//         }
// };
    
    
    
    // same approach---->
    
 // 1 kill 3 smallest elements
 // 2 kill 3 biggest elements
 // 3 kill 1 biggest elements + 2 smallest elements
 // 4 kill 2 biggest elements + 1 smallest elements
    
     int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n<=4){
            return 0;
        }
        //1st
        int res=nums[n-1]-nums[3];
        //2nd
        res=min(res,nums[n-4]-nums[0]);
        //3rd
        res=min(res,nums[n-2]-nums[2]);
        //4th
        res=min(res,nums[n-3]-nums[1]);
        return res;
        
    }
};