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
    
    
    //             approach-2----> removing numbers mini and maxi 
    
//      int distinctAverages(vector<int>& nums) {
//         set<float> res;
        
//         deque<int> num(nums.begin(), nums.end());
//         sort(num.begin(), num.end());
        
//         while(!num.empty()) {
//             int first = num.front();
//             int last = num.back();
            
//             num.pop_front();
//             num.pop_back();
            
//             float avg = (float)((first + last) / (float)2);
            
//             res.insert(avg);
//         }
//         return res.size();
//     }
// };
    
    
    // approach----->3  two pointers-->
    
     int distinctAverages(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<double> st;
        int left = 0, right= nums.size() -1 ;
        while(left < right){
            double num1 = nums[left++];
            double num2 =nums[right--];
            st.insert((num1 + num2)/2);
        };
        return st.size();
    }
};