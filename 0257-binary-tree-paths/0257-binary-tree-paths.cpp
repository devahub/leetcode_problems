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
    
    void solve(TreeNode* root,string s,vector<string>&v){
          if(!root){
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            s+=to_string(root->val);
            v.push_back(s);
            return;
        }
        s+=to_string(root->val)+"->";
        solve(root->left,s,v);
        solve(root->right,s,v);
        
    }
    
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>v;
        string s="";
        solve(root,s,v);
        return v;
        
    }
};