class Solution {
public:
  
static bool cmp(pair<string,int>a, pair<string,int>b){
    if(a.second==b.second)
        return a.first<b.first;
    
    return a.second>b.second;
       }


vector<string> topKFrequent(vector<string>& words, int k){
        vector<string>v;
        unordered_map<string,int>mp;
        
        for(auto &i:words){
            mp[i]++;
        }
        
        vector<pair<string,int>> ans(mp.begin(),mp.end());
        sort(ans.begin(),ans.end(),cmp);
             
        for(int i=0;i<k;i++){
            v.push_back(ans[i].first);
        }
     return v;   
    }
};

// class Solution {
// public:
  
//     vector<string> topKFrequent(vector<string>& words, int k) {

        
//         // using min heap 
        
//         vector<string>v;
//         unordered_map<string,int>mp;
        
//         for(auto i:words){
//             mp[i]++;
//         }
//         priority_queue<pair<int,string>>pq;
        
//         for(auto i:mp){
//             pq.push({-i.second,i.first});     
//             // helps to make a min heap such that the smallest number (without the negative sign, it would be the biggest) is at the top to access. that way we always get the top K elements but negated. 
//             if(pq.size() > k) pq.pop();
//         }
        
//         while(k--){
//             v.push_back(pq.top().second);
//             pq.pop();
//         }
//         reverse(v.begin(),v.end());
//         return v;
//     }
// };
        
        