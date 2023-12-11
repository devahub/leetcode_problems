
class Solution {
public:
//     TreeNode* invertTree(TreeNode* root) {
//         if(root==NULL)
//             return NULL;
        
//         swap(root->left,root->right);
//         invertTree(root->left);
//         invertTree(root->right);
        
//         return root;
//     }
// };
   
    
    
    
    
    
    //  second approach------>
    
    
    TreeNode* invertTree(TreeNode* root) {
        
        if(root == NULL){
            return root;
        }
        
        invertTree(root->left);
        invertTree(root->right);
        
        TreeNode* curr = root->left;
        root->left = root->right;
        root->right = curr;
        
        return root;        
    }
};
    