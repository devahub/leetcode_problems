class Solution
{
    public:
//         void flatten(TreeNode *root)
//         {
//             TreeNode *ans = solve(root);
//         }

//     TreeNode* solve(TreeNode *root)
//     {

//         if (root == NULL) return NULL;

//         if (root->left == NULL and root->right == NULL)
//             return root;

//         if (root->left != NULL and root->right == NULL)
//         {
//             TreeNode *tempLeft = root->left;
//             root->right = tempLeft;
//             root->left = NULL;
//             return solve(tempLeft);
//         }

//         if (root->left == NULL and root->right != NULL)
//         {
//             return solve(root->right);
//         }
//         else
//         {
//             TreeNode *tempRight = root->right;
//             TreeNode *tempLeft = root->left;
//             root->right = tempLeft;
//             root->left = NULL;
//             TreeNode *retLeft = solve(tempLeft);
//             retLeft->right = tempRight;
//             return solve(tempRight);
//         }
//     }
// };
    
    TreeNode* solve(TreeNode* root){
        if(root==NULL)return NULL;
        
        if(root->left==NULL && root->right==NULL)return root;
        
        if(root->left!=NULL && root->right==NULL){
            TreeNode* templeft=root->left;
            root->right=templeft;
            root->left=NULL;
            return solve(templeft);
        }
         if (root->left == NULL and root->right != NULL)
         {
             return solve(root->right);
         }
            else
            {
            TreeNode* templeft=root->left;
            TreeNode* tempright=root->right;
            root->right=templeft;
            root->left=NULL;
            TreeNode* retleft=solve(templeft);
            retleft->right=tempright;
            return solve(tempright);
        }
        
    }
    
    
     void flatten(TreeNode *root){
         TreeNode* ans= solve(root);
     }
};