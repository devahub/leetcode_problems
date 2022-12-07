class Solution {
public:
//     int thirdMax(vector<int>& nums) {
//         map<int,int>mp;
//         vector<int>v;
//         for(auto i:nums)mp[i]++;

//         for(auto i:mp){
//             v.push_back(i.first);
//         }
//         int n = v.size();

//         return (n<3)? v[n-1] : v[n-3];
//     }
// };
    
    
    
    // sort the array in descending order------->
    
    
     int thirdMax(vector<int>&nums) {
        int count=1;
        if(nums.size()<3)
            return nums[nums.size()-1];
         
         
        sort(nums.begin(),nums.end(),greater< int >());
         
        for(int i=1; i< nums.size(); i++){
            if(nums[i]!=nums[i-1])
                count++;
            if(count==3)
                return nums[i];
        }
           return nums[0];
    }
};