
class Solution {
public:
    vector<int> solve(TreeNode *root , int q){
        TreeNode* p = root;
        int lb = INT_MIN ;
        int ub =  INT_MAX;
        
        while(p){
            if(p->val<q){
                lb=max(lb,p->val);
                p=p->right;
            }
            
            else if(p->val>q){
                ub=min(ub,p->val);
                p=p->left;
            }
            
            else{
                return {p->val , p->val};
            }
        }
        
        if(lb == INT_MIN) lb = -1;
        if(ub == INT_MAX) ub = -1;
        return {lb , ub};  
    } 
    
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<vector<int>>ans(queries.size());
        int i=0;
        for(auto q:queries){
            ans[i++]=solve(root,q);
        }
    return ans;
    }
};