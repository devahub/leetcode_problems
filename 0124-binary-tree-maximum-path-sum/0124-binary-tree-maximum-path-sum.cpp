
class Solution {
public:
    
    // root->val + lefetmax + rightmax
    
    int maxi = INT_MIN;
public:
    int maxPathSum(TreeNode* root) {
        depth(root);
        return maxi;
    }
    
    int depth(TreeNode* root){
        if(root == NULL) 
            return 0;
        
        int lh = max(0,depth(root->left));
        int rh = max(0,depth(root->right));
        
        maxi = max(maxi , root->val + lh + rh);
        
        return root->val + max(lh,rh);
    }
};