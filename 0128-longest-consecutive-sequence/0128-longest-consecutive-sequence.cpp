class Solution {
public:
    
    // approach is to put every element in to set and then run a loop and check if ele-1 is present in set if present then continue ans start from a smallest value and count all elements consecutive greater than no.------>striver method
//     int longestConsecutive(vector<int>& nums) {
//         int n=nums.size();
//         if(n==0)
//             return 0;
        
//         unordered_set<int>s;
//         int maxi=INT_MIN;
//         int c=0;
        
//         for(auto i:nums){
//             s.insert(i);
//         }
        
//         for(int i=0;i<nums.size();i++){
//             int ele=nums[i];
//             c=1;
//             if(s.find(nums[i]-1)!=s.end()){
//                 continue;
//             }
//             while(s.find(ele+1)!=s.end()){
//                 c+=1;
//                 ele+=1;
//             }
//             maxi=max(maxi,c);
//             if(maxi==n)
//                 break;
//         }
//         return maxi;
        
//     }
// };

// // brut force will be--->first sort the array and then start from a number and check if next element is coonsecutive or not if yes increase by 1 


// // int longestConsecutive(vector<int>&arr) {
// // if(arr.empty()) return 0;
// // sort(arr.begin(),arr.end());
// // int n=arr.size();
// // int ans=1,prev=arr[0],curr=1;
// // for(int i=1;i<n;i++){
// //     if(arr[i]==prev+1){
// //         curr++;
// //     }else if(arr[i]!=prev){
// //         curr=1;
// //     }
// //     prev=arr[i];
// //     ans=max(ans,curr);
// // }
// // return ans;
// // }


// map ----> a very interesting approach

        
    int longestConsecutive(vector<int>& nums) {    
         unordered_map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]=1;
        }     
        
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i]-1)!=mp.end()){
                mp[nums[i]]=0;
            }
        }
            
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(mp[nums[i]]==1){
                int l=1;
                while(mp.find(nums[i]+l)!=mp.end()){
                    l++;
                }
                maxi=max(maxi,l);
            }
        } 
        
    return maxi;
         
        
    }
};
