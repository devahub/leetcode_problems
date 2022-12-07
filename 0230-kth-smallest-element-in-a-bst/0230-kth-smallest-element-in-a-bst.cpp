
class Solution {
public:
    void inorder(TreeNode* root,int k, vector<int>&v)
    {
        if(root==NULL)
            return;
        
        v.push_back(root->val);
        inorder(root->left,k,v);
        inorder(root->right,k,v);
    }
    
    
    
    int kthSmallest(TreeNode* root, int k) {
            vector<int>v;
            inorder(root,k,v);
            
            sort(v.begin(),v.end());
            return v[k-1];
    }
};
    
   