
class Solution {
public:
    // approach---> we are first finding the height whose leaves we have to add 
    //              then we adding the leaves of that height
    

    int solve(TreeNode* root,int h){
        if(!root)return 0;
        if(h==1)return root->val;
        return solve(root->left,h-1)+solve(root->right,h-1);
        
    }
    
    
    
    int getdepth(TreeNode* root){
        if(root==NULL)return 0;
        return 1+max(getdepth(root->left),getdepth(root->right));
    }
    
      int deepestLeavesSum(TreeNode* root) {
        int d=getdepth(root);
        return solve(root,d);
    }
};
    
    
    
   