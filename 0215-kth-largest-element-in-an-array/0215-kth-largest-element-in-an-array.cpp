class Solution
{
    public:
    
    // using sorting---->
    
//         int findKthLargest(vector<int> &nums, int k)
//         {


//             sort(nums.begin(), nums.end(), greater<int> ());
//             for (auto i: nums)
//             {
//                 k--;

//                 if (k == 0)
//                 {
//                     return i;
//                 }
//             }
//             return -1;
//         }
// };
    
    
    
    // using priority queue----->
    
     int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>>pq;
        
         
         for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
                if(pq.size()>k)
                {
                    pq.pop();
                }
        }
        return pq.top();
    }
};