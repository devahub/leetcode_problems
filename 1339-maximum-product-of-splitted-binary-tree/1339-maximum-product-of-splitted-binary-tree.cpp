/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */



class Solution {
public:
    
    const int mod=1000000007;
    long long ans=0;
    
    
    
    int upsum(TreeNode* root){
        if(!root){
            return 0;
        }
        int leftSum = upsum(root->left);
        int rightSum = upsum(root->right);
        
        root->val += leftSum+rightSum;
        
        return root->val;
    }
    
    void traverse(TreeNode* root,int total)
    {
       if(!root){
           return;
       }
        
        ans=max(ans,(long long)(total-root->val)*(long long)(root->val));
        
        traverse(root->left,total);
        traverse(root->right,total);
        
    }
    
    
    int maxProduct(TreeNode* root) {
        int total=upsum(root);
        traverse(root,total);
        return ans%mod;
    }
};