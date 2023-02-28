class Solution {
public:
    
    
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> v;
//         unordered_map<int,int> mp;
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(mp.find(target-nums[i])!=mp.end())
//             {
//                 v.push_back(mp[target-nums[i]]);
//                 v.push_back(i);
//                 return v;
//             }
//             else
//                 mp[nums[i]]=i;
//         }
//        return v;
//     }
// };
    
    
    
    
    //  using binary search------>
    
    
     vector<int> twoSum(vector<int>& nums, int target){
       
        vector<pair<int,int>> v;
         
		int n=nums.size(),x,y;
         
		for(int i=0;i<nums.size();i++)
			v.push_back({nums[i],i});
         
		sort(v.begin(),v.end());

        int l=0;
         int h=n-1;
         
         while(l<h){
             if(v[l].first+v[h].first==target){
                 x=v[l].second;
                 y=v[h].second;
                 break;
             }
             if(v[l].first+v[h].first<target)
				l++;
			if(v[l].first+v[h].first>target)
				h--;
             
             
         }
         return {x,y};
     }
};