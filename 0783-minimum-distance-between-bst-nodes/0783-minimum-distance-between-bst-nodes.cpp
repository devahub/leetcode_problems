/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int mini=INT_MAX;
    int pred=-1;
    
    int minDiffInBST(TreeNode* root) {
        inorder(root,mini);
        return mini;
    }
    
    
    void inorder(TreeNode* root, int& mini)
    {
        if (root == NULL)
             return;

    inorder(root->left, mini);
    
    if (pred >= 0)
      mini = min(mini, root->val - pred);
        
    pred = root->val;
    inorder(root->right, mini);
    }
    
};