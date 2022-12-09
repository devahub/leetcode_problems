
class Solution {
public:
    
   int diff = INT_MIN;
    
    void solve(TreeNode *root, int maxi, int mini){
        if(!root) 
            return;
        
       
        maxi = max(maxi, root->val);
        mini = min(mini, root->val);
        
        diff = max(diff, maxi - mini); 
        
        solve(root->left,maxi,mini);
        solve(root->right,maxi,mini);
    }
  
    
    int maxAncestorDiff(TreeNode* root) {
        if(!root) 
            return 0;
        
        int maxi = INT_MIN, mini = INT_MAX;

        solve(root,maxi,mini);
        
        return diff;
    }
};