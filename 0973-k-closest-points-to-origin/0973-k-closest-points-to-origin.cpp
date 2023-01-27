class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
     
        vector<vector<int>>ans;
        
        if(points.size()==0)
            return ans;
        
        priority_queue<pair<int,pair<int,int>>>pq;
        
        for(int i=0;i<points.size();i++){
             
           int d=points[i][0]*points[i][0]+points[i][1]*points[i][1];
           
            if(pq.size()<k){
            pq.push({d,{points[i][0],points[i][1]}});
           }
            
            else{
                if(d<pq.top().first)
                {
                    pq.pop();
                    pq.push({d,{points[i][0],points[i][1]}});
                }
            }
        }
        while(!pq.empty()){
                 ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
         }
           return ans;       
    }
};





///     approach---->2

//   vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
//         vector<vector<int>> answer;
//         vector<pair<double,vector<int>>> distances;
//         for(auto i:points){
//             double distance=sqrt(pow(i[0],2)+pow(i[1],2));
//             distances.push_back(make_pair(distance,i));
//         }
//         sort(distances.begin(),distances.end());
//         for(int i=0;i<K;i++)answer.push_back(distances[i].second);
//         return answer;
//     }
// };