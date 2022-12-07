class Solution {
public:

    // brut force---->
    
//     int subarraySum(vector<int>& nums, int k)
//     {
//         int c=0;
        
//     for(int i=0;i<nums.size();i++)
//     {
//         int sum=0;
//         for(int j=i;j<nums.size();j++){
//             sum+=nums[j];
            
//             if(sum==k){
//                 c++;
//             }
//         }
//     }
//         return c;
//     }
// };
    
    
        
    
    
// we are using same prefix sum concept but reducing the time complexityto o(n)
// you can do it by taking prefix sum array but in o(n2) time
    
int subarraySum(vector<int>& nums, int k)
{
    int c=0;
    int sum=0;
    
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        
        if(sum==k){   
            c++;
        }
        if(mp.find(sum-k)!=mp.end()){
            c+=mp[sum-k];
        }
        mp[sum]++;
    }
    return c;
}
};