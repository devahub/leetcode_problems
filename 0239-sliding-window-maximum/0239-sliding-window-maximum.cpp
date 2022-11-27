class Solution {
public:
    
    // using list--->
    
//     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//         vector<int>v;
//         list<int>l;
        
//         int i=0;
//         int j=0;
        
//         while(j<nums.size()){
            
//             while(l.size()>0 && l.back()<nums[j])
//             {
//                 l.pop_back();
//             }
//             l.push_back(nums[j]);
            
//          if(j-i+1<k)
//          {
//             j++; 
//          }
//          else if(j-i+1==k){
//                 v.push_back(l.front());
//                 if (l.front()==nums[i])
//                 {
//                     l.pop_front();
//                 }
//                 i++;
//                 j++;
//             } 
//         }
//         return v;
        
//     }
// };
    

    
    // using deque
    
     vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int n=nums.size();
         vector<int>ans;
         deque<int>q;
         int i=0;
         int j=0;
         
         while(j<n){
            while(q.size()>0 && q.back()<nums[j]){
                q.pop_back();
            } 
            q.push_back(nums[j]);
            
             if(j-i+1<k)j++;
             
             else if(j-i+1 == k){
                ans.push_back(q.front());
                 
                if(nums[i] == q.front())q.pop_front();
                
                i++;j++;    
             }
         }
         return ans;
     }
};
    
    