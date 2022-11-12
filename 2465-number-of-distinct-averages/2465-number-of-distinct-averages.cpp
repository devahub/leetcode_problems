class Solution {
public:
//     int distinctAverages(vector<int>& nums) {
//         set<int>v;
//         sort(nums.begin(),nums.end());
//         int sum=0;
//         int n=nums.size();
//        for(int i=0;i<n/2;i++)
//         {
          
            
//             int a=nums[i];
//             int b=nums[n-i-1];
            
//             v.insert(a+b);
           
        
//         }
//     return v.size();
//     }
// };
    
     int distinctAverages(vector<int>& nums) {
        set<float> res;
        
        deque<int> num(nums.begin(), nums.end());
        sort(num.begin(), num.end());
        
        while(!num.empty()) {
            int first = num.front();
            int last = num.back();
            
            num.pop_front();
            num.pop_back();
            
            float avg = (float)((first + last) / (float)2);
            
            res.insert(avg);
        }
        return res.size();
    }
};
    
    
    