class Solution {
public:
    
    // using priority queue
    
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;          
        priority_queue<pair<int,char>>pq; 
        
        for(auto i: s)
            mp[i]++;
        
        
        for(auto i: mp)
            pq.push({i.second,i.first});
        
        
        s="";   
        while(!pq.empty()){
            s+=string(pq.top().first,pq.top().second); 
            // will automatically make frequency times the character
            pq.pop();
        }
        return s;
    }
};
    
    
    
    
    
    
    // using comparator function---->
    
//      static bool cmp(pair<char,int>&a, pair<char,int>&b)
//     {
//         return a.second>b.second;
//     }
    
//     string frequencySort(string s) {
//         unordered_map<char,int>map;
//         string ans;
//         vector<pair<char,int>>v;
//         pair<char,int>p;
//         int n= s.size();
//         for(char x:s)
//         {
//             map[x]++;
//         }
        
        
//          for(auto it=map.begin();it!=map.end();it++)
//             {
//            v.push_back({it->first,it->second});
//             }
        
//         sort(v.begin(),v.end(),cmp);
        
//         for(int i=0;i<v.size();i++)
//         {
//             p=v[i];
//             char val=p.first;
//             int freq=p.second;
//             while(freq)
//             {
//                 ans.push_back(val);
//                 freq--;
//             }
//         }
//         return ans;
//     }
// };
    
    
    
    
    
    // using without comparator
    
//     string frequencySort(string s) {
//         map<char,int>mp;
//         vector<pair<int,char>>v;
       
        
//         for(auto i:s){
//             mp[i]++;
//         }
        
//         for(auto i:mp){
//             v.push_back({i.second,i.first});
//         }
        
//         sort(v.begin(),v.end(),greater<pair<int,char>>());
        
//         s="";
//         for(auto i:v){
//             s+=string(i.first,i.second);
//         }
//         return s;
// // string ( count, character )---->create a string containing character repeated count times
//     }
// };