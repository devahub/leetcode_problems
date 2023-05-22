class Solution {
public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int>mp;
//         priority_queue<pair<int,int>>pq;
//         vector<int>res;
        
        
//         for(auto i:nums)mp[i]++;
        
//         for(auto [a,b]:mp){
//             pq.push({b,a});
//         }
        
//         while(k!=0){
//             res.push_back(pq.top().second);
//             pq.pop();
//             k--;
//         }
//         return res;
//     }
// };
    
    
    
    
     vector<int> topKFrequent(vector<int>& nums, int k) {
         vector<int> v;
        if(nums.empty()) return v;
        unordered_map<int, int> mp;
        vector<vector<int>> buckets(nums.size()+1);

         
        for(auto n: nums) mp[n]++;
        
        
        for(auto& pair: mp) buckets[pair.second].push_back(pair.first);
        for(int i = nums.size(); i; --i)
        {
            for(int j = 0; j < buckets[i].size(); ++j)
            {
                v.push_back(buckets[i][j]);
                if(v.size() == k) return v;
            }
        }
        return v;
        
    }
};