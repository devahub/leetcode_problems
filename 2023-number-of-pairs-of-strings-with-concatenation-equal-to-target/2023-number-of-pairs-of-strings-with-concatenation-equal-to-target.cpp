class Solution {
public:
    
    
    // brute force--->
    
//     int numOfPairs(vector<string>& nums, string target) {
//         int c=0;
//         for(int i=0;i<nums.size();i++){
//             for(int j=0;j<nums.size();j++){
               
//                        if(i!=j && nums[i]+nums[j]==target)
//                                  c+=1;
//                 }
//             }
//         }
//         return c;
//     }
// };
        
    int numOfPairs(vector<string>& nums, string target) { 
        int c=0;
        int n=target.size();
        unordered_map<string, int> mp;
        for(auto i : nums)
            mp[i]++;
        
        for(int i=0; i<target.size(); i++){
            string s1=target.substr(0,i);
            string s2=target.substr(i,n);
            
            if(s1 == s2){
               c+=mp[s1]*(mp[s2]-1);
            }
            else{
                c+=mp[s1]*mp[s2]; 
            }
        }
        return c;
        }
};