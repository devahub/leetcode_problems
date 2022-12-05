class Solution {
public:

// we are just calculating number of times the next value is greater than the current value;;if it is greater than 1 then return false else true;

//     bool canBeIncreasing(vector<int>& nums) {
//         int n=nums.size();
//         int c=0;
//         stack<int>st;
//         st.push(nums[0]);

        
//         for(int i=1;i<n;i++){
//             if(!st.empty()){
//                 if(nums[i]>st.top()){
//                     st.push(nums[i]);
//                 }
//                 else{
//                     if(i<n-1 && nums[i+1] <= st.top()){
// 							st.pop();
// 							i--;
// 						}
//                         c++;
//                 }
//             }
//             else{
//                 st.push(nums[i]);
//             }
//             }
            
//             if(c == 1 || c == 0)return true;
// 		return false;  
//     }
// };
    
    
    
    
    
    // using simple for loop---->
    
    
    
     bool canBeIncreasing(vector<int>& nums){
         int prev=nums[0];
         bool k = false;
         
         for(int i=1;i<nums.size();i++){
             if(nums[i]<=prev){
                 if(k==true){
                     return false;
                        }
                 k = true;
                if (i == 1 || nums[i] > nums[i - 2]) 
                    prev = nums[i];
             }
            else{
			prev = nums[i];
            }
         }
           return true; 
     }
};