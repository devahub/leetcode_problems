class Solution {
public:
    
    
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int n=points.size();
        int c=0;
        sort(points.begin(),points.end());
        
        for(int i=0;i<n-1;i++){
            c=max(c,points[i+1][0]-points[i][0]);    
        }
        
        return c;
    }
};