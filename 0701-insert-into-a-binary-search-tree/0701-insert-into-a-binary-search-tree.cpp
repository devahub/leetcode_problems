class Solution {
public:
    
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)return new TreeNode(val);
        
        if(root->val>val){
         root->left =insertIntoBST(root->left,val);
        }
        else{
            root->right=insertIntoBST(root->right,val);
        }
        
        return root;
    }
};
    
    
    
    
    
//     TreeNode* insertIntoBST(TreeNode* root, int val){
//         if(root==NULL)return new TreeNode(val);
        
//         TreeNode* cur=root;
        
//         while(root!=NULL){
//             if(cur->val>=val){
//                 if(cur->left!=NULL){
//                     cur=cur->left;
//                 }
//                 else{
//                     cur->left=new TreeNode(val);
//                     break;
//                 }
            
//             }
//             else{
//                 if(cur->right!=NULL)
//                   cur=cur->right;
//                 else{
//                     cur->right=new TreeNode(val);
//                     break;
//                 }    
//             }   
//         }
//     return root;
//     }
// };