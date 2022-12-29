class Solution {
public:
    
    
// A balanced binary tree, also referred to as a height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.
    
    
    bool ans;
    
    int solve(TreeNode* root){
        if(!root)
            return 0;
        
        int left=solve(root->left);
        int right=solve(root->right);
        
        if(abs(left-right)>1)
            ans=false;
        
        return max(left,right)+1;
    }
    
    bool isBalanced(TreeNode* root) {
        ans=true;
        solve(root);
        return ans;
    }
};