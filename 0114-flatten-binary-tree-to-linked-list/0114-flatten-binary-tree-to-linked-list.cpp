class Solution
{
    public:

//     TreeNode* solve(TreeNode* root){
//         if(root==NULL)return NULL;
        
//         if(root->left==NULL && root->right==NULL)return root;
        
//         if(root->left!=NULL && root->right==NULL){
//             TreeNode* templeft=root->left;
//             root->right=templeft;
//             root->left=NULL;
//             return solve(templeft);
//         }
//          if (root->left == NULL and root->right != NULL)
//          {
//              return solve(root->right);
//          }
//             else
//             {
//             TreeNode* templeft=root->left;
//             TreeNode* tempright=root->right;
//             root->right=templeft;
//             root->left=NULL;
//             TreeNode* retleft=solve(templeft);
//             retleft->right=tempright;
//             return solve(tempright);
//         }
        
//     }
    
    
//      void flatten(TreeNode *root){
//          TreeNode* ans= solve(root);
//      }
// };
    
    // morris traversal
    void flatten(TreeNode *root){
       TreeNode* curr = root;
        while (curr!=NULL) {
            if (curr->left!=NULL) {
                TreeNode* prev = curr->left;
                while (prev->right != NULL) 
                    prev=prev->right;
                prev->right = curr->right;
                curr->right = curr->left;
                curr->left = NULL;
            }
            curr = curr->right;
        }
        
    }
};   
    
    
    