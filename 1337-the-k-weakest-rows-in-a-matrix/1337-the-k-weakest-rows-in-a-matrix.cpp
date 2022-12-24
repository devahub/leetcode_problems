class Solution {
public:
    
    int binary(vector<int> m)
    {
        int l = 0;
        int h = m.size()-1;
        while(l <= h)
        {
            int mid = l + (h-l)/2;
            if(m[mid] == 0)
                h = mid - 1;
            else
                l = mid + 1;
        }
        return l;
    }
    
    
    
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        
        for(int i=0;i<mat.size();i++){
            int c=binary(mat[i]);
            pq.push({c,i});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
        
    }
};