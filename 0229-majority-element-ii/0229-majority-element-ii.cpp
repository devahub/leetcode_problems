class Solution
{
    public:
//         vector<int> majorityElement(vector<int> &nums)
//         {
//             int n=nums.size();
//             unordered_map<int, int> mp;

//             for (auto &i: nums)
//             {
//                 mp[i]++;
//             }
//            vector<int>v;
//             for (auto i: mp)
//             {
//                 if (i.second > n/3)
//                     v.push_back(i.first);
//             }
//             return v;
//         }
// };
    
    
    
    // boyer's moore algo--->
    
    
    
 vector<int> majorityElement(vector<int> &nums){
     int num1=INT_MIN;
        int num2=INT_MIN;
        int count1=0;
        int count2=0;
        int n=nums.size();
        vector<int>ans;
        //O(n)
        for(int i=0;i<n;i++){
            if(nums[i]==num1){
                count1++;
            }
            else if(nums[i]==num2){
                count2++;
            }
            else if(count1==0){
                num1=nums[i];
                count1=1;
            }
            else if(count2==0){
                num2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=count2=0;
        
        for(auto x:nums){
            if(x==num1){
                count1++;
            }
            if(x==num2){
                count2++;
            }
        }
        
        if(count1>n/3) ans.emplace_back(num1);
        if(count2>n/3) ans.emplace_back(num2);
        
        return ans;
     
 }
};